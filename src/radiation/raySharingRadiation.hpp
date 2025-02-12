#ifndef ABLATELIBRARY_RAYSHARINGRADIATION_HPP
#define ABLATELIBRARY_RAYSHARINGRADIATION_HPP

#include "radiation.hpp"

namespace ablate::radiation {

class RaySharingRadiation : public ablate::radiation::Radiation {
   public:
    RaySharingRadiation(const std::string& solverId, const std::shared_ptr<domain::Region>& region, const PetscInt raynumber,
                        std::shared_ptr<eos::radiationProperties::RadiationModel> radiationModelIn, std::shared_ptr<ablate::monitors::logs::Log> = {});
    ~RaySharingRadiation();

    void ParticleStep(ablate::domain::SubDomain& subDomain, DM faceDM, const PetscScalar* faceGeomArray) override;
};
}  // namespace ablate::radiation
#endif  // ABLATELIBRARY_RAYSHARINGRADIATION_HPP
