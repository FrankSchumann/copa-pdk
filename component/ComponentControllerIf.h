#pragma once

#include <string>
#include <memory>

#include "ComponentIf.h"

namespace COPA
{
class ComponentControllerIf
{
   public:
    virtual void create( std::string const &type, std::string const &name ) = 0;
    virtual std::shared_ptr< ComponentIf > get( std::string const &type, std::string const &name ) = 0;
};

}
