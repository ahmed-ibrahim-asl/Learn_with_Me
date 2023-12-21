/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a program that half pyramid using stars pattern
*/


int main(){

    for(int i = 0; i < 10; i++){

        for(int j = 0; j <i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
