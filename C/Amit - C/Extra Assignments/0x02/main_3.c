/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a program that reads two integers and checks if the first is multiple of the second.
*/

int main(){
    int n1 = 0, n2 = 0;

    printf("Enter Number1: ");
    scanf("%d",&n1);

    printf("Enter Number2: ");
    scanf("%d",&n2);


    (n1%n2 == 0)?
        printf("\n[#] First is multiple of the second.")
        :
        printf("\n[#] First number is not multiple of the second.");

    return 0;
}