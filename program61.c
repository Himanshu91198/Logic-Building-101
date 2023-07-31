#include <stdio.h>
#include <stdbool.h>

int CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
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

    iRet = CountEvenDigit(iValue1);

    printf("Frequency of even digits in %d : %d\n", iValue1, iRet);

    return 0;
}