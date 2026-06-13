#include <iostream>
#include <string>
#include <vector>

template <typename T>
void printMe(T value) {
    std::cout << value << std::endl;
}

int main() {
    printMe(5);       // Implicitly instantiates printMe<int>(int)
    printMe("Hello"); // Implicitly instantiates printMe<const char*>(const char*)
    return 0;
}