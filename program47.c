//Input:    2  4
//Output:   16 (2*2*2*2)         POWER
/*
    START
        Accept one number as no1
        accept anoter number as no2

        create one variable as Mult
        set the value 1 in the variable Mult

        create one counter as cnt
        set the counter to 1
LOOP:
        Increament till the counter is less than or equal to no2
            Mult=mult*no1
            Increament the counter by 1
        
     go to LOOP

        Display the value of mult
    END

    no1=2
    no2=4
    mult=1

    mult=mult*no1
*/


#include<stdio.h>
unsigned long int Power(int iNo1,int iNo2)
{
unsigned long int lMult=1;
register int iCnt=0;

for(iCnt=1;iCnt<=iNo2;iCnt++)
{
    lMult=lMult*iNo1;
}
return lMult;
}

int main()
{
    auto int iValue1=0,iValue2=0;
    auto unsigned long int lRet=0;

    printf("Enter Base\n");
    scanf("%d",&iValue1);

    printf("Enter Power\n");
    scanf("%d",&iValue2);

    lRet=Power(iValue1,iValue2);
    printf("Result is :%d\n",lRet);


    return 0;
}