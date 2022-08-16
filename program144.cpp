//lowercase to uppercase

#include<iostream>
using namespace std;

void struprX(char str[])
{

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
            {
                *str=*str-32;
            }
            str++;
    }
}
int main()
{
    char Arr[20];
 
    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);     
    
    struprX(Arr);   //Display(100)
    cout<<"String in lower case: "<<Arr<<endl;
    
    return 0;
}