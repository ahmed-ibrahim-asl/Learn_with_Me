/*
 Task: Develop a program that converts temperature from Fahrenheit to Celsius or vice versa.
*/

/****  Include Section Start ****/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
/**** Include Section End ****/




/**** Function ProtoType Section Start ****/
float celsius_To_fahrenheit(float celsius);
float fahrenheit_To_celsius(float fahrenheit);
/**** Function ProtoType Section End ****/


int main(){
    // Clear the terminal screen
    system("cls");
    
    char userinput = 0;
    float result = 0.0;

    printf("------------------------------\n");
    printf("--- Temperature Conversion ---\n");
    printf("------------------------------\n");

    printf("[1] Convert fahrenheit to celsius\n");
    printf("[2] Convert celsius to fahrenheit\n");

    printf("=> ");
    scanf("%c", &userinput);



    switch (userinput){
    case '1':
        
        printf("\nEnter Temperature Degree in Fahrenheit \n");
        
        printf("=> ");
        scanf(" %f", &result);


        printf("\n= %.2f", fahrenheit_To_celsius(result));        
        break;

    case '2':
        
        
        printf("\nEnter Temperature Degree in Celsius \n");

        printf("=> ");
        scanf(" %f", &result);
        
        

        printf("\n= %.2f", celsius_To_fahrenheit(result));
        break;
    }

  
    printf("\nBye :)");



    return 0;
}



/**** Function Definition Section Start ****/
float celsius_To_fahrenheit(float celsius){

  
    return (9*celsius)/5 + 32;
}
float fahrenheit_To_celsius(float fahrenheit){

    return (5*(fahrenheit - 32))/9; 
}
/**** Function Definition Section End ****/