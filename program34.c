#include <stdio.h>
#include <stdbool.h>

long int CalculatePower(int iNo1, int iNo2)
{
    int iCnt = 0;
    long int iPower = 1;

    if ((iNo1 < 0) || (iNo2 < 0))
    {
        return 0;
    }
    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iPower = iPower * iNo1;
    }
    return iPower;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    long int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue1);
    printf("Enter number: \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1, iValue2);

    printf("Result is: %d\n", iRet);
}