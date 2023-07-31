using namespace std;
#include <iostream>


bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 4;
    unsigned int iResult = 0;

    iResult = iNo & iMask;
    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    cout << "Enter number: "
         << "\n";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if (bRet == true)
    {
        cout << "3rd bit is ON"
             << "\n";
    }
    else
    {
        cout << "3rd bit is OFF"
             << "\n";
    }

    return 0;
}