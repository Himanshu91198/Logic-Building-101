#include <stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurence(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while (*str != '\0')
    {
        if (*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter thr character: \n");
    scanf(" %c", &ch);

    iRet = FirstOccurrence(Arr, ch);
    if (iRet == ERR_NOTFOUND)
    {

        printf("There is no such Occurence \n");
    }
    else
    {
        printf("First Occurence of that character is at: %d\n", iRet);
    }
    return 0;
}