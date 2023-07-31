#include <iostream>
using namespace std;

template <class T>
class ArrayX
{
public:
     T *Arr;
     int Size;

     ArrayX(int);
     void Accept();
     void Display();
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

int main()
{
     ArrayX<int> obj(5);

     obj.Accept();
     obj.Display();

     ArrayX<float> obj1(5);

     obj1.Accept();
     obj1.Display();

     ArrayX<double> obj2(5);

     obj2.Accept();
     obj2.Display();

     ArrayX<char> obj3(5);

     obj3.Accept();
     obj3.Display();

     return 0;
}