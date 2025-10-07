#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;
        int Addition(int a, int b) // concrete
        {
            return a + b;
        }
        virtual int Substraction(int a, int b) = 0; // abstract
};

class Derived : public Base // error
{
    public:
        int x;
    
};

int main()
{
    Base *bp2 = new Derived(); // upcasting
    
    return 0;
}