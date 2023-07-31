#include <stdio.h>

void DisplayI(int no)
{
    int iCnt = 1;

    while (iCnt <= no)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int no)
{
    int iCnt = 1;

    if (iCnt <= no)
    {
        printf("*\t");
        iCnt++;
        DisplayR(no); // Recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}
