/*
    Task: Develop a program that converts decimal numbers to binary, octal or hexadecimal
    numbers.
*/
/****  Include Section Start ****/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
/**** Include Section End ****/

/**** Function ProtoType Section Start ****/
int decimalToBinary(int decimal);               //[x]
int decimalToOctal(int decimal);                //[x] 
char* decimalToHexadecimal(int decimal);
/**** Function ProtoType Section End ****/


int main() {
    system("cls");
    int userInput = 0;

    printf("-------------------------------\n");
    printf("--- Number System Converter ---\n");
    printf("-------------------------------\n");


    printf("[1] Convert Decimal to Binary       \n");
    printf("[2] Convert Decimal to Octal        \n");
    printf("[3] Convert Decimal to Hexadecimal  \n");

    printf("=> ");
    scanf("%d", &userInput);

    switch(userInput){
        case 1:
            system("cls");
            printf("Enter Decimal Number: ");
            scanf("%d", &userInput);
            printf("\n=> %d", decimalToBinary(userInput));
            break;

        case 2:
            system("cls");
            printf("Enter Decimal Number: ");
            scanf("%d", &userInput);
            printf("\n=> %d", decimalToOctal(userInput));
            break;
        case 3:
            system("cls");
            printf("Enter Decimal Number: ");
            scanf("%d", &userInput);
            char* hexNumber = decimalToHexadecimal(userInput);
            printf("%s", hexNumber);
            free(hexNumber);

        default:
            printf("\nInvalid Input");
    }

    // free memory for hex decimal
    return 0;
}

/**** Function Definition Section Start ****/

int decimalToBinary(int decimal){

    int result = 0;

    //? add meaniful name for i, and macroName for '2'
    for(unsigned short i = 1; decimal != 0; i*=10){
        result += (decimal%2) * i;
        decimal /=2;

    }

    return result;
}
int decimalToOctal(int decimal){
    
    int result = 0;

    //? add meaniful name for i, and macroName for '8'
    for(unsigned short i = 1; decimal != 0; i*=10){
        result += (decimal%8)*i; 
        decimal /= 8;
    }

    return result;
}
char* decimalToHexadecimal(int decimal){
    
    #define Max_Buffer_Length        10
    #define Ascii_Zero_Shift         48
    #define Hex_Base                 16

    
    char *Buffer = malloc(sizeof(char) * Max_Buffer_Length);

    unsigned int index = 0;
    while((decimal != 0) ){
        switch(decimal%16){
            case 10:
                *(Buffer + index) = 'A';
                break;            
            
            case 11:
                *(Buffer + index) = 'B';
                break;            
            
            case 12:
                *(Buffer + index) = 'C';
                break;            
            
            case 13:
                *(Buffer + index) = 'D';
                break;           
            
            case 14:
                *(Buffer + index) = 'E';
                break;            
            
            case 15:
                *(Buffer + index) = 'F';
                break;
            
            default:
                
                *(Buffer + index) = (Ascii_Zero_Shift + decimal%16);


        }

       
       decimal /= Hex_Base; 
       ++index; 
    }



    // Null Terminator just for user to be able to output number easily 
    Buffer[index] = '\0';
    
    return Buffer;
}



/**** Function Definition Section End ****/


