#include <stdio.h>

// Vowels : a e i o u A E I O U
int CountVowels(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountVowels(Arr);

    printf("Number of Vowels are : %d\n", iRet);

    return 0;
}