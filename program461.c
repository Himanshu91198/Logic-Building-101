#include <stdio.h>

void DisplayR(int no)
{
    static int iCnt = 1;

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

    printf("End of main\n");

    return 0;
}
