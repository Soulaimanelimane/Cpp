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

int main()
{
    z a;
    a.a = 25;
    z b;
    b.a = 5;
    std::cout << a * b << std::endl ;
}