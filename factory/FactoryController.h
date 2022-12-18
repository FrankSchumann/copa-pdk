#pragma once

#include "FactoryIf.h"

#include <memory>
#include <vector>

namespace COPA
{
class FactoryController
{
   public:
    FactoryController();
    virtual ~FactoryController();

    void subscribe();
    void list();

   private:
    static std::vector< std::shared_ptr< FactoryIf > > factories;
};

}
