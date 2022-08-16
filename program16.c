//program to dislplay 1 to 5 on screen
//output    1  2  3  4  5 

#include<stdio.h>

void Display()
{
    int iCnt=0;

    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\n",iCnt);
    }
    
}

int main()
{
 int iCnt=0;
    Display();

   
    return 0;
}