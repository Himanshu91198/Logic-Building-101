#include <stdio.h>

// Vowels : a e i o u A E I O U
int CountWhiteSpace(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str == ' '))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhiteSpace(Arr);

    printf("Number of Spaces are : %d\n", iRet);

    return 0;
}