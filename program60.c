#include <stdio.h>
#include <stdbool.h>

int CountDigit(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCount = 0;

    if ((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter the digit in range from 0 to 9\n");
        return false;
    }
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == iSearch)
        {
            iCount += 1;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue1);

    printf("Enter the digit (0 to 9)\n");
    scanf("%d", &iValue2);

    iRet = CountDigit(iValue1, iValue2);

    printf("Frequency of %d is in %d : %d\n", iValue2, iValue1, iRet);

    return 0;
}