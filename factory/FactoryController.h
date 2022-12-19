#pragma once

#include <memory>
#include <vector>

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
    void list();

   private:
    static std::vector< std::shared_ptr< FactoryIf > > factories;
};

}
