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

int main()
{
    int iValue1, ivalue2,iResult;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);

    iResult=iValue1+ivalue2; // bussiness Logic
    printf("%d\n",iResult);
    return 0;
}


