//program to Display  5 times Hello on screen

#include<stdio.h>

void Display(int iNo)  //Defination
{ 
    int iCnt=0;
    
    if(iNo<0)
    {
        printf("Please enter positive value\n");
        return ;
    }

    
    for(iCnt=1;iCnt<=iNo;iCnt++)

    {
       printf("Hello\n");
       
    }


    
}

int main()

{
    int iValue=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    

    
    Display(iValue);  //function call

    return 0;
}


