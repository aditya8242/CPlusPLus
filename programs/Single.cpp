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
};

class Derived : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside derived gun\n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of base class object "<<sizeof(bobj)<<"\n";
    cout<<"Size of base class object "<<sizeof(dobj)<<"\n";
    
    return 0;
}