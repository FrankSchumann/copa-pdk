#pragma once

#include <map>
#include <memory>

#include "ComponentIf.h"
#include "ComponentControllerIf.h"
#include "copa-pdk/factory/FactoryControllerIf.h"

namespace COPA
{
class ComponentController : public ComponentControllerIf
{
   public:
    ComponentController();
    ComponentController( std::shared_ptr< FactoryControllerIf > const &_factoryController );
    virtual ~ComponentController();

    virtual void create( std::string const &type, std::string const &name ) override;
    virtual std::shared_ptr< ComponentIf > get( std::string const &type, std::string const &name ) const override;

    void list() const;

   private:
    static std::map< std::string, std::map< std::string, std::shared_ptr< ComponentIf > > > components;

    std::shared_ptr< FactoryControllerIf > factoryController;

    std::map< std::string, std::shared_ptr< ComponentIf > > getComponentsSameType( std::string const &type ) const;
    std::shared_ptr< ComponentIf > getComponent( std::string const &name, std::map< std::string, std::shared_ptr< ComponentIf > > const &componentsSameType ) const;
};

}
