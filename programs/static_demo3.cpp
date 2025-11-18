#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;
        Demo()
        {
            this->i = 0;
            this->j = 0;
        }
        Demo(int a, int b)
        {
            this->i = a;
            this->j = b;
        }

        void fun()
        {
            cout<<"Inside fun\n";
            cout<<"Value of i "<<this->i<<"\n";
            cout<<"Value of i "<<this->j<<"\n";
            cout<<"Value of x "<<x<<"\n";
        }

        static void gun()
        {
            cout<<"Inside gun\n";
            //cout<<i<<"\n";//NA
            //cout<<j<<"\n";//NA
            cout<<x<<"\n";
        }
};

int Demo::x = 11;

int main()
{
    Demo::gun();
    
    cout<<"Value of x is "<<Demo::x<<"\n";

    Demo obj(10,20);

    obj.fun();
    obj.gun(); // Demo::gun() // don't do this // works without errors

    cout<<"Size of obj is "<<sizeof(obj)<<"\n";
    
    return 0;
}