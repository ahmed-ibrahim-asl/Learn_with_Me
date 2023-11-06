/*
    Task: Write a program that checks whether a given string is a palindrome or not 
*/

/****  Include Section Start ****/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**** Include Section Stop ****/

/**** Macros Section Start ****/
#define maxSize_for_inputBuffer 100
/**** Macros Section Stop ****/


// I made it global to ensure it wouldn't talk random locations 
char userInput[maxSize_for_inputBuffer];

int main(){
    // Clear the terminal screen
    system("cls");
    
    printf("--------------------------\n");
    printf("--- Palindrome Checker ---\n");
    printf("--------------------------\n");

    printf("=> ");
    
    
    /*
        using fgets is safer solution compare scnaf because we limit the user with predefined size 
        but the problem with fgets is it ends the given string with '\n' which make it harder for strlen to work
        so we use use strcspn to search for first occurance of \n and then replaced '\n' with '\0'
    */

    fgets(userInput,maxSize_for_inputBuffer,stdin);
    userInput[strcspn(userInput, "\n")] = '\0';

   
    for(int Findex = 0; Findex < strlen(userInput); Findex++){
        

        
        printf("\nuserInput[Findex] = %c \nuserInput[Bindex] = %c\n", userInput[Findex], userInput[strlen(userInput) - Findex - 1]);
        
        
        if(*(userInput + Findex) != *(userInput + (strlen(userInput) - Findex - 1)) ){
            printf("Given string is not palindrome");
            return 1;
        }

        
    }

    printf("Given string is palindrome");

    return 0;
}