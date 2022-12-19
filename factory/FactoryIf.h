#pragma once

#include <string>

namespace COPA
{
class FactoryIf
{
   public:
    virtual void create() = 0;
    virtual std::string getType() = 0;
};

}
