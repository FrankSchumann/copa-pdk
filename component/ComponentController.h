#pragma once

#include <map>
#include <memory>

#include "ComponentIf.h"

namespace COPA
{
class ComponentController
{
   public:
    ComponentController();
    virtual ~ComponentController();

    void create(std::string const &name, std::string const &type);
    std::shared_ptr<ComponentIf> get(std::string const &name);

   private:
    static std::map< std::string, std::shared_ptr< ComponentIf > > components;
};

}
