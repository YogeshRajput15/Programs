//Accept N numbers search that no return last occurence index of that no. 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccurance(int Arr[],int iLength, int iNo)
{
    int iCnt=0;
    
    for(iCnt=iLength-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
    
            break;
        }

}    
        return iCnt;
    
    

}



int main()
{
    int iSize = 0, iCnt = 0, iValue=0;
    int iRet;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to Search\n");
    scanf("%d",&iValue);

  iRet=SearchLastOccurance(ptr,iSize,iValue);
  if(iRet==-1)
  {
      printf("Elemtnt is no such element  in array\n");
  }
  else
  {
      printf("Element Last occured at :%d\n",iRet);
  }
    


    free(ptr);

    return 0;
}