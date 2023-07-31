#include <stdio.h>
#include <stdbool.h>

int CountDigitFrequency(int iNo)
{

    int Digits = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        Digits = iNo % 10;
        if (Digits == 8)
        {
            iCount += 1;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CountDigitFrequency(iValue);

    printf("Frequency of 8 is : %d\n", iRet);

    return 0;
}