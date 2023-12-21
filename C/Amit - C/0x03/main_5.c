/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */

/*
    Job: write a program that reverse a number
*/


int main(){
    char number[10];


    printf("Enter a number i can reverse it\n");
    printf("Number: ");

    fgets(number, 10, stdin);

    char *ptr = strchr(number, '\n');



    printf("\n[#] Result: ");
    while( number[0] != *ptr ){
        printf("%c", *ptr);
        --ptr;
    }
    printf("%c", number[0]);
}