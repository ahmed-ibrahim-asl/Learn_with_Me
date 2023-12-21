/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a program to display a full pyramid using stars x
*/


int main(){

   int int_NoStarts = 0, temp =1;

    printf("Enter number of starts you want inside your half pyramid: ");
    scanf("%d",&int_NoStarts);


    for(int i = 0; i < int_NoStarts; i++){

        for(int j = int_NoStarts; j > 0; j--){

            if(i>=j){
                printf("* ");
            }

            else{
                printf(" ");
            }
        }
   
        printf("\n");
    }


}
