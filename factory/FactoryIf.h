#pragma once

#include <string>
#include <memory>

#include "copa-pdk/component/ComponentIf.h"

namespace COPA
{
class FactoryIf
{
   public:
    virtual std::shared_ptr< ComponentIf > create( std::string const &name ) const = 0;
    virtual std::string getType() const = 0;
};

}
