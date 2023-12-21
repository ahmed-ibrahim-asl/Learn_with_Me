/* Include Section start */
#include <stdio.h>
/* Include Section stop */


/**
 * JOB : write a program that takes two integers from the user and print 
 * the results of the equation:     Result = ((num1+num2)*3)-10
*/



int main(){

    int n1=0, n2=0;
    printf("\n========================================\n");
    printf("(   (   num1    +   num2    )*3  )  -10\n");
    printf("========================================\n");



    printf("Enter Number1: ");
    scanf("%d",&n1);

    printf("Enter Number2: ");
    scanf("%d",&n2);

    printf("Answer is {%d}", ((n1+n2)*3)-10 );


    return 0;
}