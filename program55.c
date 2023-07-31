#include <stdio.h>
#include <stdbool.h>

bool CheckDigit(int iNo)
{

    int Digits = 0;

    while (iNo != 0)
    {
        Digits = iNo % 10;
        if (Digits == 8)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if (Digits == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = CheckDigit(iValue);
    if (bRet == true)
    {
        printf("Digit 8 is present in number\n");
    }
    else
    {
        printf("Digit 8 is not present in number\n");
    }

    return 0;
}