/****** Include Section start ******/
#include <stdio.h>
#include <stdlib.h>
/****** Include Section stop ******/

/*
    Assignment2:
        Write a program to input any number from user and toggle or invert nth bit 
        of the given number using bitwise oeprator.

*/

int main(){
    int user_input_Number = 0, nth_bit = 0;
    
    printf("Enter any number: ");
    scanf("%d",&user_input_Number);

    printf("\nEnter nth bit to toggle (0-31): ");
    scanf("%d",&nth_bit);


    printf("Number before toggling 1 bit: %d (in decimal)", user_input_Number);
    printf("\nNumber after toggling 1 bit: %d (in decimal)", user_input_Number^(1<<nth_bit) );


    return 0;
}
