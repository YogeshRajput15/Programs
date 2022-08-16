//6
//a  b  c  d  e  f

#include<stdio.h>
void Display(int iNo)
{
    char ch='a';
    int i=0;

   while(i<iNo)
    {
        printf("%c\t",ch);
        ch++;
        i++;
        
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