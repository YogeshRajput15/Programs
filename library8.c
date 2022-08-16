#include"Header8.h"

/////////////////////////////////////////////////////////////////////
//
// Function Name:   Addition
//Description:      Used to perform addition of 2 numbers
//Input:            Integer, Integer
//Output:           Integer
//Date:             12/04/2022
//Author:           Rajput Yogesh Sanjay 
//
/////////////////////////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)  //dukan
{
    int iAns=0;

    if(iValue1 < 0)     //updator
    {
        iValue1= -iValue1;
    }

    
    if(iValue2 < 0)
    {
        iValue2= -iValue2;
    }

    iAns =iValue1 + iValue2;
    return iAns;

}