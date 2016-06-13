#ifndef STAN_OLD_SERVICES_ARGUMENTS_ARG_UNIT_E_HPP
#define STAN_OLD_SERVICES_ARGUMENTS_ARG_UNIT_E_HPP

#include <stan/old_services/arguments/unvalued_argument.hpp>

namespace stan {
  namespace services {

    class arg_unit_e: public unvalued_argument {
    public:
      arg_unit_e() {
        _name = "unit_e";
        _description = "Euclidean manifold with unit metric";
      }
    };

  }  // services
}  // stan

#endif
