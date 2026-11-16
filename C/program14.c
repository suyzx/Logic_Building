#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//  
////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, ivalue2=0,iResult=0;

    printf("Enter first number : \n");
    if(scanf("%d",&iValue1)!=1)
    {
        fprintf(stderr,"Inable to proceed as Input is Invalid \n");

        return EXIT_FAILURE;
    }

    printf("Enter Second Number : \n");
    if(scanf("%d",&ivalue2)!=1)
    {
        fprintf(stderr,"Inable to proceed as Input is Invalid \n");

        return EXIT_FAILURE;
    }


    iResult=Addition(iValue1,ivalue2);
    printf("Addition is : %d\n",iResult);
    return EXIT_SUCCESS;
}

