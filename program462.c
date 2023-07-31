#include <stdio.h>

// Input : 4
// Output : 1 2 3 4

void DisplayI(int no)
{
    int iCnt = 1;

    if (iCnt <= no)
    {
        printf("%d\t", iCnt);
        iCnt++;
    }
}

void DisplayR(int no)
{
    static int iCnt = 1;

    if (iCnt <= no)
    {
        printf("%d\t", iCnt);
        iCnt++;
        DisplayR(no);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iValue);

    // DisplayI(iValue);

    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}
