#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;       //4
    struct node *next;  //8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no) 
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));    //newn=(struct node *)malloc(12)

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL) //LL is empty
    {
        *head=newn;
    }
    else    //LL contains atleast one node
    {
         newn->next=*head;
        *head=newn;
    }
}
void InsertLast(PPNODE head,int no) 
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));    //newn=(struct node *)malloc(12)

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL) //LL is empty
    {
        *head=newn;
    }
    else    //LL contains atleast one node
    {
         //Code
    }
}
void Display(PNODE head)
{
    printf("Elements from linked list are:\n");

    while(head!=NULL)
    {
        printf("|%d|->",head->data);
        head=head->next;
    }
    printf("NULL\n");

}
int Count(PNODE head)
{
    int iCnt=0;

    while(head!=NULL)
    {
        iCnt++;
        head=head->next;
    }
     return iCnt;

}

void InsertAtPos(PPNODE head,int no,int pos)
{
    int size=0,iCnt=0;
    PNODE newn=NULL;
    PNODE temp=NULL;
    size = Count(*head);

    if((pos<1)||(pos>(size+1)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos==1)
    {
        InsertFirst(head,no);
    }
    else if(pos==(size+1))
    {
        InsertLast(head,no);
    }
    else 
    {
        
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));    //newn=(struct node *)malloc(12)

    newn->data=no;
    newn->next=NULL;

    temp=*head;

    for(iCnt=1;iCnt<pos-1;iCnt++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next=newn;

    }
}
int main()
{
    int iRet=0;
    PNODE first=NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtpos(&first,75,3);
    
    Display(first);

    iRet = Count(first);
    printf("Number of elements are:%d\n",iRet);
    
    InsertFirst(&first,1);
    Display(first);

    iRet = Count(first);
    printf("Number of elements are:%d\n",iRet);
    return 0;
}