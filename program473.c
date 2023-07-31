#include <stdio.h>

// Input : 6785
// Output : 5 8 7 6

int strlenR(char *str)
{
    static int iCnt = 0;

    if (*str != '\0')
    {
        iCnt++;
        str++;
        strlenR(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);

    iRet = strlenR(Arr);

    return 0;
}
