#include <stdio.h>
#include <memory>

namespace ly
{
    template<typename T>
    using unique = std::unique_ptr<T>; // Giving unique_ptr a nickname that's easy to work with
    
    // a macro
    #define LOG(M, ...) printf(M "\n", ##__VA_ARGS__) // Variadic args with ...
}