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
        int Substraction(int a, int b) // concrete
        {
            return a - b;
        }
        int Multiplication(int a, int b) // concrete
        {
            return a * b;
        }
};

int main()
{
    Base *bp = new Derived(); // upcasting
    int iRet = 0;

    iRet = bp -> Addition(11,10); // 21
    cout<<iRet<<"\n";
    iRet = bp -> Substraction(11,10); // 1
    cout<<iRet<<"\n";
    // iRet = bp -> Multiplication(11,10); // ERROR

    return 0;
}