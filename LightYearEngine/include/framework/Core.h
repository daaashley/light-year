#include <stdio.h>
#include <memory>
#include <map>
#include <unordered_map>

namespace ly
{
    template<typename T>
    using unique = std::unique_ptr<T>; // Giving unique_ptr a nickname that's easy to work with
    
    template<typename T>
    using shared = std::shared_ptr<T>;

    template<typename T>
    using weak = std::weak_ptr<T>;

    template<typename T>
    using List = std::vector<T>;

    template<typename keyType, typename valType, typename Pr = std::less<keyType>>
    using Map = std::map<keyType, valType, Pr>;

    template<typename keyType, typename valType, typename hasher = std::hash<keyType>>
    using Dictionary = std::unordered_map<keyType, valType, hasher>;
    
    // a macro
    #define LOG(M, ...) printf(M "\n", ##__VA_ARGS__) // Variadic args with ...
}