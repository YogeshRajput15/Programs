//Accept N numbers search that no is 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength, int iNo)
{
    int iCnt=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag=true;
            break;
        }

    }
    return bFlag;
}



int main()
{
    int iSize = 0, iCnt = 0, iValue=0;
    bool bRet;
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

  bRet=Search(ptr,iSize,iValue);
  if(bRet==true)
  {
      printf("Elemtnt is there in array\n");
  }
  else
  {
      printf("Element is not there in array\n");
  }
    


    free(ptr);

    return 0;
}