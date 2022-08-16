//wrong
//6
//a  b  c  d  e  f

#include<stdio.h>
void Display(int iNo)
{
    static char ch='a';
     static int i=0;
    if(iNo>0)
    {
        printf("%c\t",ch);
        ch++;
        i++;
        
       Display(i);
        
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