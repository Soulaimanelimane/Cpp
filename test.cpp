#include "test.hpp"
template <typename T>

T TM<T>::add(T a, T b)
{
    return a + b;
}

template class TM<int>;