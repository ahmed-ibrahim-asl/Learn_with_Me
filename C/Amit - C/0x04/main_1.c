/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a function that prints the cube of any number.
*/

float cube(int number);
int main(){
    float userInput_int_number = 0;



    printf("[#] Enter any number and i cube it.\n");
    printf("Number: ");
    
    scanf("%f", &userInput_int_number);


    printf("[#] Result: %.2f", cube(userInput_int_number));

    return 0;
}


float cube(int number){
    int int_cubeResult_number = 1;

    for(int iterator = 0; iterator < 3; iterator++){
        int_cubeResult_number*=number;
    }

    return int_cubeResult_number;
}