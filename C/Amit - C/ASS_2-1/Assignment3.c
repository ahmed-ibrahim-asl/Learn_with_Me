/****** Include Section start ******/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/****** Include Section stop ******/

/*
    Assignment2:
        Implement a calculator program that asks the user to enter a mathematical 
        operator [+ or - or * or /]
        then enter number_1 and number_2 and display the result

*/

int main(){
    float number_1 = 0.0, number_2 = 0.0;
    char operation;


    printf("-----------------------------------\n");
    printf("--- Welcome to Crazy Calculator ---\n");
    printf("-----------------------------------\n");

    userInput:
    printf("=> ");
    
    fflush(stdin);
    scanf("%f %c %f", &number_1, &operation, &number_2);


    switch (operation){

        case '+':


            if ( ((number_1 + number_2) - floor(number_1 + number_2)) > 0 ){
        
                printf("= %.2f\n", (float)(number_1 + number_2));
            
            }else{

                printf("\nThe result is %d", (int)(number_1 + number_2) );
            }
            
            break;
        
        case '-':    
            
            if ( ((number_1 - number_2) - floor(number_1 - number_2)) > 0 ){
        
                printf("= %.2f\n", (float)(number_1 - number_2));
            
            }else{

                printf("\nThe result is %d", (int)(number_1 - number_2));
            }
            break;
        
        case '/':
            
            if ( ((number_1 / number_2) - floor(number_1 / number_2)) > 0 ){
        
                printf("= %.2f\n", (float)(number_1 / number_2));
            
            }else{

                printf("\nThe result is %d", (int)(number_1 / number_2));
            }


            break;
        
        
        case '*':
            if ( ((number_1 * number_2) - floor(number_1 * number_2)) > 0 ){
        
                printf("= %.2f\n", (float)(number_1 * number_2));
            
            }else{

                printf("\nThe result is %d", (int)(number_1 * number_2));
            }

            break;
        default:
            printf("\n!! Invalid operation !!\n");
            goto userInput;
            break;
    }


    return 0;
}
