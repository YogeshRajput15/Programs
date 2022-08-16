//toggle the case of  that string
//lowercase to uppercase

#include<iostream>
using namespace std;

void strtglX(char str[])
{

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
        else if((*str>='A')&&(*str<'Z'))
        {
            *str=*str+32;
        }
        
            str++;
    }
}
int main()
{
    char Arr[20];
 
    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);     
    
    strtglX(Arr);   //Display(100)
    cout<<"String toggle is : "<<Arr<<endl;
    
    return 0;
}