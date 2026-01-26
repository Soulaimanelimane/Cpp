#include <iostream>

class test
{
    private: 
        int i;
    public:
        test(){
            std::cout << "base called\n";
        };
         ~test() {
            std::cout << "des base  called\n";
        };
        virtual void f() = 0;
        virtual void ft_() = 0;
    private:
        int ft_here() {return i;}
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


class Number {
public:
    Number(int x) { value = x; }
    int value;
private:
};

void print(Number n) {std::cout << n.value << std::endl;} 
void print(int  n) {std::cout <<  "here " <<  n  << std::endl;} 
#include <iostream>
#include <limits>   // Required for numeric_limits
#include <cfloat>   // Required for DBL_MAX, LDBL_MAX
#include <algorithm>
#include <vector>








int main() {

    std::vector<int> a;
    a.resize(3);
    std::vector<int> b;
    b =a ;
    std::cout << a.size() << std::endl;
    std::cout << b.size() << std::endl;
    return 0;
}