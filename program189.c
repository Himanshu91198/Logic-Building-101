#include <stdio.h>

// 1: Travel till end of dest
// 2: copy the data from src to dest
// 3: write '\0' at the end of dest

void strcatX(char *src, char *dest)
{
    while (*dest != '\0')
    {
        dest++;
    }
    *dest = ' ';
    dest++;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);

    strcatX(Arr, Brr);

    printf("String after editing is : %s\n", Brr);

    return 0;
}