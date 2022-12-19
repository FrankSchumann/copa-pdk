#pragma once

#include <string>

namespace COPA
{
class ComponentIf
{
   public:
    virtual std::string getType() = 0;
    virtual std::string getName() = 0;
    virtual std::string getVersion() = 0;
};

}
