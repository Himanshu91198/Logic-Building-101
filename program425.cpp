#include <iostream>
using namespace std;

void Display(int Arr[], int iSize)
{
     int iCnt = 0;

     for (iCnt = 0; iCnt < iSize; iCnt++)
     {
          cout << Arr[iCnt] << "\n";
     }
}
void Display(double Arr[], int iSize)
{
     int iCnt = 0;

     for (iCnt = 0; iCnt < iSize; iCnt++)
     {
          cout << Arr[iCnt] << "\n";
     }
}

int main()
{
     int A[] = {10, 20, 30, 40, 50};

     Display(A, 5);

     double B[] = {10.78, 20.65, 30.34, 40.56, 50.67};
     Display(B, 5);

     return 0;
}