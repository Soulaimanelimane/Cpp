#include <iostream>

class test
{
private:
    int i;

public:
    test()
    {
        std::cout << "base called\n";
    };
    ~test()
    {
        std::cout << "des base  called\n";
    };
    virtual void f() = 0;
    virtual void ft_() = 0;

private:
    int ft_here() { return i; }
};

void test::ft_()
{
    std::cout << "hello from interface\n";
}

class derived : public test
{

public:
    derived() { std::cout << "derived called\n"; }
    ~derived() { std::cout << "derived destroyed\n"; }

    void ft_()
    {
        std::cout << "derived safe and sound \n";
    }
};

class ft : public derived
{
public:
    void ft_()
    {
        std::cout << "called from ft\n";
    }
    void f()
    {
        std::cout << "in your head zombies \n";
    }
};

class z
{
public:
    z();
    z(z &other);
    z &operator=(z &other);
    ~z();
    int a;
    char b;
    int operator*(z &other)
    {
        return a * other.a;
    }
};

// C++ program to illustrate std::istringstream
#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::istringstream;
using std::string;

#include <limits> // Required for numeric_limits
#include <cstdlib>
using namespace std;

class Number
{
public:
    Number(int x) { value = x; }
    int value;

private:
};

void print(Number n) { std::cout << n.value << std::endl; }
void print(int n) { std::cout << "here " << n << std::endl; }
#include <iostream>
#include <limits> // Required for numeric_limits
#include <cfloat> // Required for DBL_MAX, LDBL_MAX
#include <algorithm>
#include <vector>

/*


int main() {

    std::vector<int> a;
    a.resize(3);
    std::vector<int> b;
    b =a ;
    std::cout << a.size() << std::endl;
    std::cout << b.size() << std::endl;
    return 0;
}*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

class parent
{
private:
public:
    int pr;
    virtual void   ft_(void)
    {
        std::cout << "here is the parent"  << std::endl;
    }

    void whoami(void)
    {
        std::cout << "i'am  parent"  << std::endl;
    }
    // operator string()
    // {
    //     return to_string(pr);
    // }
};

class child :  public parent
{
private:
public:
    int ch;
    void whoami(void)
    {
        std::cout << "i'am  child"  << std::endl;
    }
    void ft_(void)
    {
        std::cout << "here is the child"  << std::endl;
    }
};


class child2 :  public child 
{
private:
public:
    int son;
    void whoami(void)
    {
        std::cout << "i'am  child2"  << std::endl;
    }
    void ft_(void)
    {
        std::cout << "here is the child2"  << std::endl;
    }
};

int main()
{

    parent obj;
    obj.pr = 45;
    cout << str << endl;
    int *p = new int[2] {65,66};
    printf("%s\n", p);
    char *s = reinterpret_cast<char *>(p);
    printf("%s\n", s);
    s++;
    s++;
    s++;
    s++;
    // cout << *s << endl;
}

// class Base1 {
// public:
//     int x; // 4 bytes
// };

// class Base2 {
// public:
//     int y; // 4 bytes
// };

// // Derived inherits from Base1 FIRST, then Base2
// class Derived : public Base1, public Base2 {
// public:
//     int z; // 4 bytes
// };

// int main()
// {
//     Derived a;
//     Derived *dp = &a;
//     dp->y = 58;
//     dp->x = 85;

//     Base1 *p = &a;
//     cout << "base 1 :" << p->x << endl;
//     Base2 *p2 = static_cast<Base2 *>(dp);

//     Base2* bad_ptr = reinterpret_cast<Base2*>(dp);
//     bad_ptr->y = 55;
//     cout << "base 1 x :" << p->x << endl;
//     cout << "bad base y :" << bad_ptr->y << endl;

//     cout << p2->y << endl;
// }