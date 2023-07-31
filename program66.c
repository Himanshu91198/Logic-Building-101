#include <stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int Sum = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        Sum += iDigit;
        iNo = iNo / 10;
    }
    return (float)Sum / iCount;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    fRet = DigitsAverage(iValue);

    printf("Average of digits is: %.2f\n", fRet);

    return 0;
}