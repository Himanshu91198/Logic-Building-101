// Write a program which checks whether number is even or odd.

#include <stdio.h>   // For printf and scanf
#include <stdbool.h> // For bool data type
///////////////////////////////////////////////////////////////
//
//  Function name:  CheckEvenOdd
//  Input:          Integer
//  Output:         Boolean
//  Description:    Checks whether input is even or odd
//  Author:         Himanshu Shashikant Auti
//  Date:           25/04/2023
//
///////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////

int main()
{
    int iValue = 0;    // Variable to accept input
    bool bRet = false; // VAriable to accept return value

    printf("Please enter number to check whether it is even or odd: \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue); // Function Call

    if (bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }
    return 0;
}
