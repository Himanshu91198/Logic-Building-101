#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Display(PNODE Head)
{
    printf("Elements of Linkedlist are: ");

    while (Head != NULL)
    {
        printf("|%d| ->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }

    return iCnt;
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    // Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialise the node

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else // LL contains atleast one node in it.
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    // Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialise the node

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else // LL contains atleast one node in it.
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void InsertAtPos(PPNODE Head, int No, int Pos)
{
}

void DeleteFirst(PPNODE Head)
{
}

void DeleteLast(PPNODE Head)
{
}

void DeleteAtPos(PPNODE Head, int Pos)
{
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111); // Insert(60,111)
    InsertFirst(&First, 101); // Insert(60,101)
    InsertFirst(&First, 51);  // Insert(60,51)
    InsertFirst(&First, 21);  // Insert(60,21)
    InsertFirst(&First, 11);  // Insert(60,11)

    Display(First);

    iRet = Count(First);
    printf("Number of Nodes are: %d\n", iRet);

    InsertLast(&First, 121);
    InsertLast(&First, 151);

    Display(First);

    iRet = Count(First);
    printf("Number of Nodes are: %d\n", iRet);
    return 0;
}