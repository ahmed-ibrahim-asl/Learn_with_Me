/*** Include section start ***/
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <assert.h>
/*** Include section end ***/

/*
    Task: Develop a simple calcultor that can perform basic 
    arithmetic operations such as addition, subtraction, multiplication and division.
*/

/*** Function Prototype section start ***/
float addition(float, float);
float subtraction(float, float);
float multiplication(float, float);
float division(float, float);
/*** Function Prototype section end ***/


void main(){
    // Clear the terminal screen
    system("cls");


    float  n1 = 0, n2 = 0;
    float result = 0.0;
    char op;

    printf("-----------------------------------\n");
    printf("--- Welcome to Crazy Calculator ---\n");
    printf("-----------------------------------\n");

    printf("=> ");

    scanf("%f %c %f", &n1, &op, &n2);


    switch(op){
        case '+':
            result = addition(n1, n2);
            if ( (result - floor(result)) > 0 ){
        
                printf("= %.2f\n", (float)result);
            }

            else{    
                printf("= %d\n", (int)result);
            }
        break;

        case '-':
            result = subtraction(n1, n2);
            if ( (result - floor(result)) > 0 ){
        
                printf("= %.2f\n", (float)result);
            }

            else{    
                printf("= %d\n", (int)result);
            }
        break;

        case '*':
            result = multiplication(n1, n2);
            if ( (result - floor(result)) > 0 ){
        
                printf("= %.2f\n", (float)result);
            }

            else{    
                printf("= %d\n", (int)result);
            }
        break;

        case '/':
            result = division(n1, n2);
            if ( (result - floor(result)) > 0 ){
        
                printf("= %.2f\n", (float)result);
            }

            else{    
                printf("= %d\n", (int)result);
            }
        break;

    }

}


/*** Function Definition section start ***/

float addition(float n1, float n2){
    return n1 + n2;
}

float subtraction(float n1, float n2){
    return n1 - n2;
}

float multiplication(float n1, float n2){
    return n1 * n2;
}

float division(float n1, float n2){

    // assert, it checks the condition inside the parentheses if the condition is false,
    // it will terminate the program
    assert(n2 != 0);
    
    return n1 / n2;
}

/*** Function Definition section end ***/



