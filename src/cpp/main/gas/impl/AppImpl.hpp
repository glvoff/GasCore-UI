#pragma once 

#include <gas\Object.hpp>

#include <windows.h>

namespace gas{
    namespace ui{
        namespace impl{
            class AppImpl: public Object{
            public:
                virtual ~AppImpl() = 0;
                virtual void run() = 0;
            };
        }
    }
}
