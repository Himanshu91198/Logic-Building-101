#include <stdio.h>

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlen(Arr);

    printf("Length of string is : %d\n", iRet);

    return 0;
}