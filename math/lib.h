#ifndef __MY_LIB_H__
#define __MY_LIB_H__

#include <type_traits>

template <typename T, std::enable_if_t<std::is_arithmetic_v<T>> * = nullptr>
T add(T a, T b)
{
    return T(a + b);
}

template <typename T, std::enable_if_t<std::is_arithmetic_v<T>> * = nullptr>
T minus(T a, T b)
{
    return T(a - b);
}

void sayHello();

#endif