#include <iostream>
using namespace std;

// Structure for singly linear and singly circular
template <class T>
struct NodeS
{
     T data;
     struct NodeS *next;
};

// Class of singly linear linked list
template <class T>
class SinglyLL
{
public:
     struct NodeS<T> *First;
     int iCount;

     SinglyLL();

     void Display();
     int Count();

     void InsertFirst(T);
     void InsertLast(T);
     void InsertAtPos(T, int);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
}

template <class T>
void SinglyLL<T>::Display()
{
}

template <class T>
int SinglyLL<T>::Count()
{
     return 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
}

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
}

int main()
{
     SinglyLL<int> obj;
     return 0;
}