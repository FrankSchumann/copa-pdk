#include <gmock/gmock.h>

#include "../../factory/FactoryIf.h"

namespace Mock
{
class Factory : public COPA::FactoryIf
{
   public:
    virtual ~Factory()
    {
    }

    MOCK_METHOD( std::shared_ptr< COPA::ComponentIf >, create, ( std::string const &name ), ( const, override ) );
    MOCK_METHOD( std::string, getType, (), ( const, override ) );
};
}
