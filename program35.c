//accept the number from user check wheather no is prime

#include<stdio.h>
#include<stdbool.h>

int CounterFactor(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;

    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt; 
} 


int main()
{
    int iValue=0;
   int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    

    iRet=CounterFactor(iValue);

        printf("Number of Factors are :%d\n",iRet);


    return 0;
}