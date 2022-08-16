//accept no from user and return addition of digits

#include<stdio.h>

int Sum(int iNo)
{
    int iDigit=0,iSum=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    return iSum;

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=Sum(iValue);

    printf("Sum of digit: %d",iRet);

    return 0;
}