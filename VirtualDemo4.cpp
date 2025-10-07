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
        virtual void sun()
        {
            cout<<"Inside base sun\n";
        }
        virtual void bun()
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
    cout<<sizeof(Base)<<"\n"; // 16
    cout<<sizeof(Derived)<<"\n"; // 20
    Base *bp2 = new Derived(); // upcasting
    
    /*
    bp2->fun(); // base fun
    bp2->gun(); // base gun
    bp2->sun(); // base sun
    // bp2->run(); // error
    // bp2->mun(); // error
    bp2->bun(); // base 
    */

    return 0;
}