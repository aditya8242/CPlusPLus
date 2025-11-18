#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;
        void fun()
        {
            cout<<"Inside base fun\n";
        }
        void gun()
        {
            cout<<"Inside base gun\n";
        }
        void sun()
        {
            cout<<"Inside base sun\n";
        }
        void bun()
        {
            cout<<"Inside base bun\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside derived gun\n";
        }
        void sun()
        {
            cout<<"Inside derived sun\n";
        }
        void run()
        {
            cout<<"Inside derived run\n";
        }
        void mun()
        {
            cout<<"Inside derived mun\n";
        }
};

int main()
{
    Base *bp1 = new Base(); // no casting
    Derived *dp1 = new Derived(); // no casting
    Base *bp2 = new Derived(); // upcasting
    Derived *dp2 = new Base(); // downcasting // error

    return 0;
}