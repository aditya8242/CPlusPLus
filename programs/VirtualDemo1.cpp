#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

};

class Derived : public Base
{
    public:
        int x;
};

int main()
{
    cout<<sizeof(Base)<<"\n"; // 8
    cout<<sizeof(Derived)<<"\n"; // 12

    return 0;
}