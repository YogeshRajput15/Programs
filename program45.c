//check wheather number is palindrome
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    iTemp=iNo;

    while(iNo>0)
    {
         iDigit=iNo%10;
         iRev= iRev*10+iDigit;
        iNo=iNo/10;
    }
if(iRev==iTemp)
{
    return true;
}
else
{
    return false;
}

}
int main()
{
    bool bRet;
    int iValue=0;
    int iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckPalindrome(iValue);
    if(bRet==true)
    {
        printf("%d is palindrome number\n",iValue);
    }
    else{
        printf("%d is not palindrome number\n",iValue);
    }

 
    return 0;
}