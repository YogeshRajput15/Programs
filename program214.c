//accept array from user and perform addition

#include<stdio.h>

int Sum(int Arr[],int iSize)
{
    int i=0,iSum=0;

    while(Arr[i]!=0)
    {
        iSum=iSum+Arr[i];
        i++;
    }
    return iSum;
}
int main()
{
    int Brr[]={10,20,30,40};
    int iRet=0;

    iRet=Sum(Brr,4);

    printf("Summation is :%d\n",iRet);

    return 0;
}