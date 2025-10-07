#include<iostream>
using namespace std;

//use # pragma pack(1) to avoid padding
// for each class
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
    Base *bp2 = new Derived(); // upcasting
    
    bp2->fun(); // base fun
    bp2->gun(); // base gun
    bp2->sun(); // derived sun
    // bp2->run(); // error
    // bp2->mun(); // error
    bp2->bun(); // base bun

    return 0;
}