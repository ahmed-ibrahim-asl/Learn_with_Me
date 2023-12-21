/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */


/*
    Job: write a program that asks the user to enter a three-digit
         number, separtes the number into individual digits and 
         prints the digits separted from one another by three spaces
         each.


         [Hint: Use combinations of integer division and the remainder
                operation.] For example, if the user type, the program
                should print: 4 2 1
*/


int main(){
    char numbers[10];



    printf("Enter Number: ");
    fgets(numbers, 10, stdin);


    char *ptr = numbers;

    while(*ptr != '\n'){

        printf("%c ", *ptr);

        ptr++;
    }

    return 0;
}
