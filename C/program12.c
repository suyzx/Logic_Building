#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no=0;
    printf("Enter number: \n");
    if(scanf("%d",&no)!=1)
    {
        fprintf(stderr,"Invalid Input : \n");  //stderr is used to print error messages to the standard error stream(Console)
        return EXIT_FAILURE;
    }
    printf("Input is Valid : \n");
    
    return EXIT_SUCCESS;
}