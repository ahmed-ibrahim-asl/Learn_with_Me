/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


/*
    Job: write a program that takes one character and check if it alphabet or not.
*/


int main(){
    char userInput_char = '\0';


    printf("Give me character and i can tell if it's alphabet or not: ");
    scanf("%c", &userInput_char);



    if((int)userInput_char >= 65 && (int)userInput_char <= 97){
        printf("\n[#] Is an Alphabet.");
    }else{
        printf("\n[#] Is not an Alphabet.");
    }

    return 0;
}


