//summetion of n numbers
//input 4
//output 10(1+2+3+4)
/*
ALGORITHAM  
   
    START
     Accept number from user as no
     check wheather that number is not negative or not
     if it is negative then convert it to positive

     create ont variable as sum and set it to 0
     create one variable as cnt and set it to 1

    Iterate till cnt is less than or equal to no
      Add the value of cnt into the variable sum
      Increment the value of cnt by 1
    Loop

      Display the value of sum
    END
*/



#include<stdio.h>

int Summation(int iNo)
{
    int iSum =0;
    int iCnt=0;



if(iNo<0)
{
    iNo=-iNo;
}

for(iCnt=1;iCnt<=iNo;iCnt++)
{
    iSum=iSum+iCnt;

}
  return iSum;
}

int main()
{

  int iValue=0;
  int iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Summation(iValue);
    printf("Summation is:%d\n",iRet);
 
    return 0;
}
