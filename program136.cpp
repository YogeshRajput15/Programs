#include<iostream>
using namespace std;

int CountL(char str[])
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str=='l')||(*str=='L'))
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
    
    iRet=CountL(Arr);   //Display(100)
    cout<<"String Contain l is:"<<iRet<<endl;
    
    return 0;
}