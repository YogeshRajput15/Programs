//recursion
//4
//4*3*2*1*  24
#include<stdio.h>
int FactorialR(int iNo)
{
   static int iFact=1;

    if(iNo>0)
    {
        iFact=iFact*iNo;
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=FactorialR(iValue);

    printf("Factorial is :%d\n",iRet);

    return 0;
}