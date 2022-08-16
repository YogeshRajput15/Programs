//6
//a  b  c  d  e  f

#include<stdio.h>
void Display(int iNo)
{
    char ch='a';
    int i=0;

    for(i=0;i<iNo;i++)
    {
        printf("%c\t",ch);
        ch++;
        
    }

}
int main()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

Display(iValue);

    return 0;
}