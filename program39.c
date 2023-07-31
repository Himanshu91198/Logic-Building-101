#include <stdio.h>
typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact *= iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Result is: %d\n", iRet);

    return 0;
}