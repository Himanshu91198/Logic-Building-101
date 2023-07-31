#include <stdio.h>

// Input : 6785
// Output : 5 8 7 6

int strlenI(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);

    iRet = strlenI(Arr);

    return 0;
}
