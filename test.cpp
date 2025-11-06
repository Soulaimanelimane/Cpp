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

int main() {
    test *a;
    ft p;
    a = &p;
    a->ft_();

}