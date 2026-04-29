#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string code;
    cin >> code; cin.ignore();

    if (code.size() % 3 != 0)
    {
        std::cout << "ERROR" << std::endl;
        return 1;
    }

    int sum = 1;
    std::string tmp;
    for (size_t i = 0; i < code.size() ; i++)
    {
        tmp[i%3] = code[i];
        if (i % 3 == 0 && i != 0)
        {
            std::cout << (char)std::atoi(tmp.c_str()) ;
            tmp="";
        }
        
    }
}