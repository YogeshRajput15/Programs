//Accept no form user return numbers of digit from that number 
#include<stdio.h>

int DisplayCounter(int iNo)
{
    int iCnt=0;

     if(iNo<0)
    {
        
        iNo=-iNo;
    }
    
    while(iNo>0)
    {
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iRet=0;
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

 iRet= DisplayCounter(iValue);
    return 0;
}