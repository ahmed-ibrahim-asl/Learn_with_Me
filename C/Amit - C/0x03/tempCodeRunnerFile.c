/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a program that inversed half pyramid using stars pattern
*/


int main(){

   int int_NoStarts = 0;


    printf("Enter number of starts you want inside your half pyramid: ");
    scanf("%d",&int_NoStarts);

    if(int_NoStarts < 2){
        printf("\nInvalid Input, Number of stars must be atleast above two.");
        return 1;
    }


    for(int i = 0; i < int_NoStarts; i++){


        for(int j = 0; j < int_NoStarts; j++){

            if(i == j){
                printf("*");
            }

            if((i-j) % 2 == 0){
                printf("*");
            }
        }



        printf("\n");
    }
}
