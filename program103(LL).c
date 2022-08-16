//Singly Linear Linked list
/*
    IsertFirst
    InsertLast
    InsertAtPosition
    
    DeleteFirst
    DeleteLast
    DeleteAtPosition
    
    Display
    Count
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *node;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
/*
    1.Allocation memory for node
    2. Initialise the node
    3. Check wheather LL is empty or not
    4. If LL is empty the new node is the first node
    5. If LL contains atleast one node in it then store the address of previous first node in the nect pointer of new

*/
void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn-> next=NULL;

    if(*Head == NULL)  //If LL is empty
    {
        *Head = newn;
    }
    else    //If LL contains atleast one node
    {
        newn -> next=*Head;
        *Head=newn;
    }
}

void Display(PNODE Head)
{
    printf("\n");
    while(Head)


}


int main()
{
    PNODE First=NULL;   //struct node * First=NULL;
    
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First)



    return 0;
}

/*
   Rules
   1. use only dynamic memory allocation
   2. Dont write any technicle syntax in main
   3. Dont use any global variables
   4. Be careful while manipulating the First pointer
   5. Pass the First pointer directly if the function is not going to modigy the linklist(LL)
   6. Pass the address of First pointer if the function is going to modify the LL(InsertFirst, InsertLast,InsertAtPos,DeleteFirst,DeleteLast,DeleteAtPos)

   */