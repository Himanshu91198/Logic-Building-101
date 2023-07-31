#include <iostream>
using namespace std;

template <class T>
class ArrayX
{
public:
    T *Arr;
    int iSize;

    ArrayX(int);
    ~ArrayX();
    void Accept();
    void Display();
    bool BidirectionalSearch(T);
};

template <class T>
ArrayX<T>::ArrayX(int iNo)
{
    cout << "Inside Constructor \n";
    this->iSize = iNo;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    cout << "Inside Destructor \n";
    delete[] Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    cout << "Inside Accept \n";
    cout << "Enter the elements : "
         << "\n";
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    cout << "Inside Display \n";
    cout << "Elements of array are : "
         << "\n";
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}

template <class T>
bool ArrayX<T>::BidirectionalSearch(T No)
{
    bool flag = false;
    int iStart = 0;
    int iEnd = iSize - 1;

    while (iStart <= iEnd)
    {
        if (Arr[iStart] == No || Arr[iEnd] == No)
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Inside main \n";

    cout << "Enter the size of array: \n";
    cin >> iValue;

    ArrayX<int> *obj = new ArrayX<int>(iValue);

    obj->Accept();
    obj->Display();

    cout << "Enter the Element that you want to search : \n";
    cin >> iValue;

    bRet = obj->BidirectionalSearch(iValue);
    if (bRet == true)
    {
        cout << iValue << " is present in the array\n";
    }
    else
    {
        cout << iValue << " is not present in the array\n";
    }

    delete obj;

    cout << "End of main\n";
    return 0;
}