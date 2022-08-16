
#include<stdio.h>

void DisplayEven(int iNo)
{
    int iSum=0;
    int iDigit=0;

     if(iNo<0)
    {
        
        iNo=-iNo;
    }
    
    while(iNo>0)
    {
        iDigit=iNo%10;
      
      if(iDigit%2==0)
        {
           iSum=iSum+iDigit; 
          }
        iNo=iNo/10;
        
       
    }
    
}

int main()
{
    int iRet=0;
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayEven(iValue);
    return 0;
}