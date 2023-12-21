/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a program that converts any letter from lowercase to upppercase.
*/

int main(){
    char userInput_char = '\0';


    printf("Give me character and i can tell if it's alphabet or not: ");
    scanf("%c", &userInput_char);


    if((int)userInput_char >= 97){
        // lowercase
        userInput_char-=32;
    }
        

    printf("\nResult = %c", userInput_char); 

    return 0;
}
