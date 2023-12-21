/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a program that half pyramid using stars pattern
*/


int main(){

   int int_NoStarts = 0;


    printf("Enter number of starts you want inside your half pyramid: ");
    scanf("%d",&int_NoStarts);

    if(int_NoStarts < 2){
        printf("\nInvalid Input, Number of stars must be atleast above two.");
        return 1;
    }


    for(int iterator_rows = 0; iterator_rows < int_NoStarts; iterator_rows++){

        for(int j = 0; j <iterator_rows; j++){
            printf("* ");
        }
        printf("\n");
    }
}
