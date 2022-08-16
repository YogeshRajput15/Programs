//  *  *  *  *
#include<stdio.h>
void DislplayI()        //I=iteration
{
   auto int iCnt=0;
    
    while(iCnt < 4)
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}

void DisplayR()         //R=recursion
{
    static int iCnt=0;
    
    if(iCnt < 4)
    {
        printf("*\t");
        iCnt++;
         DisplayR();        //Recusive call
    }
   

}

int main()
{
    DislplayI();

    DisplayR();
    
    return 0;
}