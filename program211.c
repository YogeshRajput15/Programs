//4
//4*3*2*1*  24
#include<stdio.h>
int FactorialI(int iNo)
{
    int iFact=1;

    while(iNo>0)
    {
        iFact=iFact*iNo;
        iNo--;
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=FactorialI(iValue);

    printf("Factorial is :%d\n",iRet);
    return 0;
}