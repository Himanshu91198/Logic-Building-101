#include <iostream>
using namespace std;

template <class T>
class ArrayX
{
public:
     T *Arr;
     int Size;

     ArrayX(int);
     ~ArrayX();

     void Accept();
     void Display();
     T Maximum() = 0;
};

template <class T>
void ArrayX<T>::Accept()
{
     cout << "Enter the elements of array \n";
     int iCnt = 0;
     for (iCnt = 0; iCnt < Size; iCnt++)
     {
          cin >> Arr[iCnt];
     }
}
template <class T>
void ArrayX<T>::Display()
{
     cout << "Elements of array are \n";
     int iCnt = 0;
     for (iCnt = 0; iCnt < Size; iCnt++)
     {
          cout << Arr[iCnt] << "\n";
          ;
     }
}
template <class T>
ArrayX<T>::ArrayX(int Length)
{
     Size = Length;
     Arr = new T[Size];
}
template <class T>
ArrayX<T>::~ArrayX()
{
     delete[] Arr;
}
template <class T>
T ArrayX<T>::Maximum(T Arr[], int Size)
{
     int iCnt = 0;
     T Max = Arr[0];

     for (iCnt = 0; iCnt < Size; iCnt++)
     {
          if (Arr[iCnt] > Max)
          {
               Max = Arr[iCnt];
          }
     }
     return Max;
}

int main()
{
     ArrayX<int> obj(5);

     obj.Accept();
     obj.Display();
     int Ret = obj.Maximum();
     cout << "Maximum is : " << Ret << "\n";

     ArrayX<float> obj1(5);

     obj1.Accept();
     obj1.Display();
     float Ret = obj1.Maximum();
     cout << "Maximum is : " << Ret << "\n";

     ArrayX<double> obj2(5);

     obj2.Accept();
     obj2.Display();
     double Ret = obj2.Maximum();
     cout << "Maximum is : " << Ret << "\n";

     ArrayX<char> obj3(5);

     obj3.Accept();
     obj3.Display();
     char Ret = obj3.Maximum();
     cout << "Maximum is : " << Ret << "\n";

     return 0;
}