#include <stdio.h>

// 1: Travel till end of dest
// 2: copy the data from src to dest
// 3: write '\0' at the end of dest

void strncatX(char *src, char *dest, int iLength)
{
    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0' && iLength != 0)
    {
        *dest = *src;
        src++;
        dest++;

        iLength--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the number of letters that you want to concate: ");
    scanf("%d", &iNo);

    strncatX(Arr, Brr, iNo);

    printf("String after concatenantion is : %s\n", Brr);

    return 0;
}