/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


/*
    Job: write a program that takes a number and a bit from the user
         ,then print the value of this bit in this number.
*/

int main(){
    // conclusion we trying to implement get bit

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


    printf("New value: %d", ((number >> bit)&1) );
    return 0;

}