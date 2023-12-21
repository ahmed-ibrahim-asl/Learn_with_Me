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


    for(int row_iterator = 0; row_iterator < int_NoStarts; row_iterator++){


        for(int col_iterator = 0; col_iterator < int_NoStarts; col_iterator++){

            if(row_iterator == col_iterator){
                printf("*");
            }
            
            
            else if(((int_NoStarts-1)-row_iterator) == col_iterator){

                printf("*");
            }


            else{
                printf(" ");
            }
        }



        printf("\n");
    }
}
