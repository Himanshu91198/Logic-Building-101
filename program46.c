#include <stdio.h>
#include <stdbool.h>

int CalculatePower(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iPower = 1;
    iCnt = 1;
    while (iCnt <= iNo2)
    {
        iPower *= iNo1;
        iCnt++;
    }
    return iPower;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue1);
    printf("Enter number: \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1, iValue2);

    printf("Result is: %d\n", iRet);
}