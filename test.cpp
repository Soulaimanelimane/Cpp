#include <iostream>

class test
{
    public:
        test(){
            std::cout << "base called\n";
        };
         ~test() {
            std::cout << "des base  called\n";
        };
        virtual void f() = 0;
        virtual void ft_() = 0;
};

void test::ft_()
{
    std::cout << "hello from interface\n";
}


class  derived  : public  test
{

    public :
        derived() {std::cout << "derived called\n";}
        ~derived() {std::cout << "derived destroyed\n";}

        void ft_() 
        {
            std::cout << "derived safe and sound \n";
        }
};

class ft : public derived
{
    public : 
    void ft_() {
        std::cout << "called from ft\n";
    }
    void f () {
        std::cout << "in your head zombies \n";
    }
};




int test(char a)
{
    return -2;
}

int test(int f)
{
    return f + 2;
}

class  z
{
    public :
        z();
        z(z &other);
        z &operator=(z &other);
        ~z();
        int a;
        char b;
        int operator*(z  &other)
        {
            return a * other.a;
        }

};

// C++ program to illustrate std::istringstream
#include <iostream>
#include <sstream>
#include <string>
using std::istringstream;
using std::string;
using std::cout;

#include <limits> // Required for numeric_limits
#include <cstdlib>
using namespace std;

int main() {
    double d = 4.22;
    std::cout << d << std::endl;
    return 0;
}