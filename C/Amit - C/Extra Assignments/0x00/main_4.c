/* Include Section start */
#include <stdio.h>
#include <string.h>
/* Include Section stop */


/**
 * JOB : write a program that reads the radius of a circle and calculate the area 
 *       and circumference then prints the results. 
*/


float power(float base, float power);

int main(){
    float radius = 0.0;


    printf("Enter radius of circle: ");
    scanf("%f", &radius);


    printf("Area of circle: %.2f\n",  (power(radius, 2))*3.14) ;

    printf("Cicumference of circle: %.2f\n", ((radius*2)*3.14) );

    return 0;
}

float power(float base, float power){


    
    int result = 1; 
    
    for(int iterator = 0; iterator < power; ++iterator){
 
        result*=base;
    }
    
    return result;
}

