#include <iostream>
using namespace std;

// Structure for singly linear and singly circular
template <class T>
struct NodeS
{
     T data;
     struct NodeS *next;
};

// Structure for doubly linear and doubly circular
template <class T>
struct NodeD
{
     T data;
     struct NodeD *next;
     struct NodeD *prev;
};

// Class of singly linear linked list
template <class T>
class SinglyLL
{
public:
     struct NodeS<T> *first;
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
     first = NULL;
     iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
     cout << "Elements of Singly Linear Linked List are : "
          << "\n";

     NodeS<T> *temp = first;

     while (temp != NULL)
     {
          cout << " | " << temp->data << " |-> ";
          temp = temp->next;
     }
     cout << "NULL"
          << "\n";
}

template <class T>
int SinglyLL<T>::Count()
{
     return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
     NodeS<T> *newn = new NodeS<T>;

     newn->data = no;
     newn->next = NULL;

     if (first == NULL)
     {
          first = newn;
     }
     else
     {
          newn->next = first;
          first = newn;
     }
     iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
     NodeS<T> *newn = new NodeS<T>;

     newn->data = no;
     newn->next = NULL;

     if (first == NULL)
     {
          first = newn;
     }
     else
     {
          NodeS<T> *temp = first;

          while (temp->next != NULL)
          {
               temp = temp->next;
          }
          temp->next = newn;
     }
     iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{
     if ((iPos < 1) || (iPos > iCount + 1))
     {
          cout << "Invalid Position\n";
          return;
     }
     if (iPos == 1)
     {
          InsertFirst(no);
     }
     else if (iPos == iCount + 1)
     {
          InsertLast(no);
     }
     else
     {
          NodeS<T> *temp = first;
          NodeS<T> *newn = new NodeS<T>;

          newn->data = no;
          newn->next = NULL;
          
          for (int iCnt = 0; iCnt < iPos - 1; iCnt++)
          {
               temp = temp->next;
          }

          newn->next = temp->next;
          temp->next = newn;

          iCount++;
     }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
     if (first == NULL)
     {
          return;
     }
     else if (first->next == NULL)
     {
          delete first;
          first = NULL;
     }
     else
     {
          NodeS<T> *temp = first;

          first = first->next;
          delete temp;
     }
     iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
     if (first == NULL)
     {
          return;
     }
     else if (first->next == NULL)
     {
          delete first;
          first = NULL;
     }
     else
     {
          NodeS<T> *temp = first;

          while (temp->next->next != NULL)
          {
               temp = temp->next;
          }

          delete temp->next;
          temp->next = NULL;
     }
     iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
     if ((iPos < 1) || (iPos > iCount))
     {
          cout << "Invalid Position\n";
          return;
     }
     if (iPos == 1)
     {
          DeleteFirst();
     }
     else if (iPos == iCount)
     {
          DeleteLast();
     }
     else
     {
          NodeS<T> *temp1 = first;
          NodeS<T> *temp2 = NULL;

          for (int iCnt = 0; iCnt < iPos - 1; iCnt++)
          {
               temp1 = temp1->next;
          }

          temp2 = temp1->next->next;
          delete temp1->next;
          temp1->next = temp2;

          iCount--;
     }
}

// Class of Singly Circular linked list
template <class T>
class SinglyCL
{
public:
     struct NodeS<T> *First;
     struct NodeS<T> *Last;
     int iCount;

     SinglyCL();

     void Display();
     int Count();

     void InsertFirst(T);
     void InsertLast(T);
     void InsertAtPos(T, int);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int);
};

// Class of Doubly Linear linked list
template <class T>
class DoublyLL
{
public:
     struct NodeD<T> *First;
     int iCount;

     DoublyLL();

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
class DoublyCL
{
public:
     struct NodeD<T> *First;
     struct NodeD<T> *Last;
     int iCount;

     DoublyCL();

     void Display();
     int Count();

     void InsertFirst(T);
     void InsertLast(T);
     void InsertAtPos(T, int);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int);
};

// Logic of 32 functions

int main()
{

     SinglyLL<int> obj1;

     obj1.InsertFirst(51);
     obj1.InsertFirst(21);
     obj1.InsertFirst(11);

     obj1.InsertLast(101);
     obj1.InsertLast(111);

     obj1.InsertAtPos(55, 4);

     obj1.Display();
     cout << "Number of elements are : " << obj1.Count() << "\n";

     obj1.DeleteAtPos(4);

     obj1.Display();
     cout << "Number of elements are : " << obj1.Count() << "\n";

     obj1.DeleteFirst();
     obj1.DeleteLast();

     obj1.Display();
     cout << "Number of elements are : " << obj1.Count() << "\n";

     SinglyLL<char> obj2;

     obj2.InsertFirst('C');
     obj2.InsertFirst('B');
     obj2.InsertFirst('A');

     obj2.InsertLast('D');
     obj2.InsertLast('E');

     obj2.Display();
     cout << "Number of elements are : " << obj2.Count() << "\n";

     SinglyLL<double> obj3;

     obj3.InsertFirst(89.89);
     obj3.InsertFirst(79.79);
     obj3.InsertFirst(69.69);

     obj3.InsertLast(59.59);
     obj3.InsertLast(49.49);

     obj3.Display();
     cout << "Number of elements are : " << obj3.Count() << "\n";

     return 0;
}