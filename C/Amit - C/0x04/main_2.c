/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a c function that returns 
        addition or subtraction or multiplication or division for two numbers.

    The function should take the required operation and two numbers as arguments.

    check that the input operation is one of those operation that mentioned before 
    and if not it should return error. the function should be implemented using switch case.
*/


float calculator(float n1, float n2, char operation);
int main(){

    float f_number1 = 0, f_number2 = 0; 
    char operation;

    printf("[#] Enter Number 1: ");
    scanf("%f", &f_number1);

    printf("[#] Enter Number 2: ");
    scanf("%f", &f_number2);



    printf("[#] Enter operation you want to do: ");
    scanf(" %c", &operation);

    printf("\n[#] Result: %.2f\n", calculator(f_number1, f_number2, operation));
    return 0;
}

float calculator(float n1, float n2, char operation){


    switch (operation)
    {
    case 'a':case 'A':
        return n1 + n2;
        break;
    
    case 'm': case 'M':
        return n1 * n2;
        break;

    case 'd': case 'D':
        return n1 / n2;
        break;

    case 's': case 'S':
        return n1 - n2;
        break;

    default:
        return -1;
        break;
    }

}