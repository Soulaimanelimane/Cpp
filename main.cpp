#include "test.hpp"
#include <vector>

template <typename T> 
T add(T a , T b)
{
    return a+b;
}

int main()
{
    int * a = new int(4);

    std::cout << add(12.3, 12.2) << std::endl;
}