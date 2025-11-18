#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo1;
        int iNo2;

        Arithematic()
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Arithematic(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }

        int Substraction()
        {
            int iAns = 0;
            iAns = iNo1 - iNo2;
            return iAns;
        }
};

int main()
{
    Arithematic aObj(11, 10);
    
    int iRet = 0;
    
    iRet = aObj.Addition();
    cout << "Addition is " << iRet << "\n";
    
    iRet = aObj.Substraction();
    cout << "Substraction is " << iRet << "\n";

    return 0;
}