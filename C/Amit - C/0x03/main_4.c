/* Include Section Start */
#include <stdio.h>
#include <math.h>
/* Include Section Stop */

/*
    Job: write a program that calculate the power of a number. the number and its power are input from user.
*/



float power(float base, int power);



int main(){
    float base_float = 0.0, result = 0.0;
    int power_int = 0;

    printf("Enter Number and Power and i can calculate the result\n");
    
    printf("Number: ");
    scanf("%f", &base_float);


    printf("Power: ");
    scanf("%d", &power_int);



    result = power(base_float, power_int);


    printf("%.2f", result);

}

float power(float base, int power){
    
    float result = 1; 
    
    for(int iterator = 0; iterator < power; ++iterator){
 
        result*=base;
    }
    
    return result;
}

