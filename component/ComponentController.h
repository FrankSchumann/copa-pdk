#pragma once

#include <map>
#include <memory>

#include "ComponentIf.h"
#include "copa-pdk/factory/FactoryControllerIf.h"

namespace COPA
{
class ComponentController
{
   public:
    ComponentController();
    ComponentController( std::shared_ptr< FactoryControllerIf > const &_factoryController );
    virtual ~ComponentController();

    void create( std::string const &type, std::string const &name );
    std::shared_ptr< ComponentIf > get( std::string const &type, std::string const &name );

    void list();

   private:
    static std::map< std::string, std::map< std::string, std::shared_ptr< ComponentIf > > > components;

    std::shared_ptr< FactoryControllerIf > factoryController;

    std::map< std::string, std::shared_ptr< ComponentIf > > getComponentsSameType( std::string const &type );
    std::shared_ptr< ComponentIf > getComponent( std::string const &name, std::map< std::string, std::shared_ptr< ComponentIf > > const &componentsSameType );
};

}
