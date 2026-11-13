/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programing language
    Step 4 : Write the program
    Step 5 : Test the program
*/
////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Step 1 :Understand the problem statement.
//        user is going to enter any two enter any 2 integers and we have to perform addition.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//  Step 2 : Write the algorithm.
/*
        Start
            Accept first number as No1
            Accept Second number as No2
            Create the variable as Ans to store the result
            Perform the Addition and store into Ans
            Display the result from Ans
        End
*/

////////////////////////////////////////////////////////////////////////////////////////////////////
//   
//  Step 3 : Decide the programing language
//           We select C programming
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Step 4 : Write the program
//  
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;      // bussiness Logic
    return iAns;
}
int main()
{
    int iValue1=0, ivalue2=0,iResult=0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);

    iResult=Addition(iValue1,ivalue2);
    printf("Addition is : %d\n",iResult);
    return 0;
}


