#include <stdlib.h>
#include <iostream>
int main()
{
    int arr[7] = {3,2,4,5};
    int *ptr = arr;
    ptr++;
    std::cout << *(int *)ptr << std::endl;
}
//1337000 << 2 || 13370 || return a / (1 << 2)
// 1337 >> 2 || 133700
// >> << 