#pragma once

#include <string>

#include "copa-pdk/component/ComponentIf.h"

namespace COPA
{
class FactoryIf
{
   public:
    virtual std::shared_ptr< ComponentIf > create( std::string const &name ) = 0;
    virtual std::string getType() = 0;
};

}
