#include <stdio.h>

void Display(int no)
{
    int iCnt = 0;
    int i = 0;

    for (iCnt = 0; iCnt < no; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

    while (i < no)
    {
        printf("*\t");
        i++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
