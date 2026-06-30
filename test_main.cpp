#include "test.hpp"

int main ()
{
    TM<int> obj;
    double f = 12.3;
    double d = 1.3;
    std::cout << obj.add(f , d) << std::endl; 
}