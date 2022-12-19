#pragma once

#include <map>
#include <memory>

#include "FactoryIf.h"

namespace COPA
{
class FactoryController
{
   public:
    FactoryController();
    virtual ~FactoryController();

    void doSomething();
    void subscribe( std::shared_ptr< FactoryIf > const factory );
    std::shared_ptr< FactoryIf > get( std::string const &type );

    void list();

   private:
    static std::map< std::string, std::shared_ptr< FactoryIf > > factories;
};

}
