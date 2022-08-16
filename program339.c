#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d|-> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Summation(PNODE Head)
{
    int iSum =0;

    while(Head!= NULL)
    {
        iSum = iSum + (Head->data);
        Head = Head->next;
    }
    return iSum;
}

int Maximum(PNODE  Head)
{
    int iMax = 0;
    if(Head != NULL)
    {
        iMax = Head->data;
    }

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}

int Frequency(PNODE Head,int iNo)
{
    int iCnt=0;

    while(Head!=NULL)
    {
        if(Head->data==iNo)
        {
            iCnt++;
        }
        Head=Head->next;
    }
    return iCnt;
}

void SumFactors(PNODE Head)
{
    int iNo=0,iSum=0;
    while(Head!=NULL)
    {
        
        for(int i=1,iSum=0,iNo=Head->data;i<=iNo/2;i++)
        {
            if(iNo%i==0)
            {
                iSum=iSum+i;
            }
        }
        printf("%d : %d\n",Head->data,iSum);
        
        Head=Head->next;
    }
}

void SumDigits(PNODE Head)
{
    int iSum=0,iNo=0;
    while(Head!=NULL)
    {

        while(iNo!=0)
        {
            iSum=iSum+(iNo%10);
            iNo=iNo/10;
        }
        printf("%d:%d\n",Head->data,iSum);
        iSum=0;
        
        Head=Head->next;
    }

}

int SearchFirstOccurance(PNODE Head,int iNo)
{
    while(Head!=NULL)
    {
        int iPos=1;
        while (iNo!=0)
        {
            if(Head->data==iNo)
            {
                break;
            }
            iPos++;
            Head=Head->next;
        }
        if(Head==NULL)
        {
            return -1;
        }
        else
        {
            return iPos;
        }
        
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,6);
    InsertFirst(&First,28);
    InsertFirst(&First,496);
    InsertFirst(&First,28);
    InsertFirst(&First,22);

    Display(First);

    iRet=SearchFirstOccurance(First,28);
    if(iRet==-1)
    {
        printf("there is no such element\n");
    }
    else
    {
    printf("element is there at index :%d",iRet);
    }
    return 0;
}
