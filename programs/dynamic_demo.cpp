#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements\n";
    cin>>length;

    // step 1 : allocate
    Arr = new int[length];

    if (Arr == NULL)
    {
        cout<<"Unable to allocate memory";
    }
    else
    {
        cout<<"Memory gets allocated successfully\n";
    }
    

    // step 2 : use the memory

    // step 3 : free the memory

    delete []Arr;

    return 0;
}