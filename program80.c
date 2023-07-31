#include <stdio.h>  // IO
#include <stdlib.h> // Memory management

int CountOdd(int Arr[], int iLength)
{
    int iCnt = 0;
    int Counter = 0;
    for (iCnt = 0; iCnt <= iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)
        {
            Counter++;
        }
    }
    return Counter;
}

int main() // Entry point function
{
    int iSize = 0;   // To store size of array
    int *ptr = NULL; // To store address of array
    int iRet = 0;
    int iCnt = 0; // Loop Counter

    // Step1: Accept number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    // Step2: Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    // Step3: Accept the values from user
    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    // Step4: Pass the array to the function
    iRet = CountOdd(ptr, iSize);

    printf("%d\n", iRet);
    // Step5: Deallocate the  memory of array
    free(ptr);

    return 0; // return success to OS
}