//Input:  5
//Output:   5 *  4 *  3 *  2 *  1
//complexity O(N)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d  *\t",iCnt);
    }


}
int main()
{
    int iValue=0;

    printf("Please Enter the value:\n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}