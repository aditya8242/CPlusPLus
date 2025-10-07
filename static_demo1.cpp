#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x; // object size will be 8 as static variable doesn't have memory
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
        }

        static void gun()
        {
            cout<<"Inside gun\n";
        }
};

int Demo::x = 11; // global I guess

int main()
{
    //int Demo::x = 11; // doesn't work

    //cout<<Demo::x; // doesn't work
    
    Demo::gun();

    cout<<"Value of x is "<<Demo::x<<"\n";

    return 0;
}