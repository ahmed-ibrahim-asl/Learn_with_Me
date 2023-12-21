/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


/*
    Job: write a program that takes a number and a bit number 
         from the user, clear the required bit, then print the 
         the new value.
*/



int main(){
    int number = 0;
    int bit = 0;


    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the bit: ");
    scanf("%d", &bit);


    if (bit < 0 || bit > 31) {
        printf("Bit number must be between 0 and 31.\n");
        return 1; // Exit with error code
    }

    //clear required bit

    number &= (1<<bit);

    printf("New value: %d", number);
}