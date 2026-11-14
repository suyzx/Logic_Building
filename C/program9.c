#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:Addition
//  Input        :Integer,Integer         
//  Output       :Integer
//  Description  :Performs Addition
//  Date         :04/10/2026
//  Author       :Suyash Babasaheb Zaware
//
////////////////////////////////////////////////////////////////////////////////////////////////////


int Addition(
                int iNo1,   //First input
                int iNo2    //Second Input
            )
{
    int iAns=0;
    iAns=iNo1+iNo2;      // bussiness Logic
    return iAns;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//  
////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, ivalue2=0,iResult=0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);

    iResult=Addition(iValue1,ivalue2);
    printf("Addition is : %d\n",iResult);
    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Step 5 : Test the program
//
//  Tested test cases 
//___________________________________________
//  Input 1      Input 2          Output
//_____________________________________________
//   10            11              21
//   11            0               11
//   0             11              11
//   20            -9              11
//   -9            20              11
//   -20           -11             -31
////////////////////////////////////////////////////////////////////////////////////////////////////

