//Accept string from user count no of whitespace   from String

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
         str++;
}
return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);     
    
    iRet=CountCapital(Arr);   //Display(100)
    cout<<"Number of white spaces in  char2acters are:"<<iRet<<endl;
    
    return 0;
}