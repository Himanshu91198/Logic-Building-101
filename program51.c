#include <stdio.h>

void DisplayDigits(int iNo)
{

    int Digits = 0;

    while (iNo != 0)
    {
        Digits = iNo % 10;
        printf("%d", Digits);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}