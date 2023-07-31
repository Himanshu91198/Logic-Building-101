#include <stdio.h>

// Input : 6785
// Output : 5 8 7 6

void DisplayI(int iNo)
{
    while (iNo != 0)
    {
        printf("%d\t", iNo % 10);
        iNo = iNo / 10;
    }
}

void DisplayR(int iNo)
{
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t", iDigit);
        iNo = iNo / 10;
        DisplayR(iNo); // Tail Recursion
    }
}
void DisplayR(int iNo)
{
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        DisplayR(iNo); // Head Recursion
        printf("%d\t", iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    // DisplayI(iValue);

    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}
