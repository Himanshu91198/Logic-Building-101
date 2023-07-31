#include <iostream>
using namespace std;

template <class T>
void Swap(T *No1, T *No2)
{
     T Temp;
     Temp = *No1;
     *No1 = *No2;
     *No2 = Temp;
}

int main()
{
     int A = 10, B = 11;
     Swap(&A, &B);

     cout << "Data after swapping : "
          << "\n";
     cout << "Value of A : "
          << A << "\n";
     cout << "Value of B : "
          << B << "\n";

     double X = 78.2, Y = 11.63;
     Swap(&X, &Y);

     cout << "Data after swapping : "
          << "\n";
     cout << "Value of A : "
          << X << "\n";
     cout << "Value of B : "
          << Y << "\n";
     return 0;
}