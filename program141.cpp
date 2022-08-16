//Accept string from user count no of wowels from String

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
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
    cout<<"Number of wowels in string are:"<<iRet<<endl;
    
    return 0;
}