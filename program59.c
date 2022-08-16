
#include<stdio.h>
#include<stdlib.h>      //for malloc and free 

void Display(int Arr[], int iLength)    
{
    int iCnt=0;
    printf("Elements of array are:\n");

for(iCnt=0;iCnt<iLength;iCnt++)
{
    printf("%d\n",Arr[iCnt]);
    
}

}

int main()
{
   //auto int Brr[5];   Static memory allocation
   int *ptr=NULL;
    register int iCnt=0;
    int iSize=0;

    printf("enter the numbers of elements\n");
    scanf("%d",&iSize);

   ptr=(int*)malloc(iSize*sizeof(int));



   printf("Enter elements\n");
 
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
     scanf("%d",&ptr[iCnt]);
 }

 Display(ptr,iSize);      //Display(100)

    free(ptr);
    return 0;
}
