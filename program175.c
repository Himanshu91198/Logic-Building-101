#include <stdio.h>
#define ERR_NOTFOUND -1

void Frequency(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCnt1++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCnt2++;
        }
        str++;
    }
    printf("Frequency of Small Letters are: %d\n", iCnt1);
    printf("Frequency of Capital Letters are: %d\n", iCnt2);
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);

    Frequency(Arr);

    return 0;
}