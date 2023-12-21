/* Include Section start */
#include <stdio.h>
#include <string.h>
/* Include Section stop */


/**
 * JOB : write program for converting temperature from degrees celsisus to degrees Fahrenheit
 * given the formula: F=C*(9/5)+32
*/



int main(){
    float celsius_degrees = 0;


    printf("Enter Celsius Degree: ");
    scanf("%f", &celsius_degrees);



    printf("%0.2f", (((celsius_degrees*9)/5)+32));


    return 0;
}