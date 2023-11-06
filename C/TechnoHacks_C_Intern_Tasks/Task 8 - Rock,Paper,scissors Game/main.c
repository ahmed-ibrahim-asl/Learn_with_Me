/*** Include section start ***/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <windows.h>
/*** Include section stop ***/

// Task: create a program that allows the user to play the game of Rock-Paper-Scissor against the computer

#define MachineAnswer 3


int main(){
    char userInput;
    char values[4] = {'r', 'p', 's'};
    

    system("cls");
    printf("[+] Do you want to play the game of Rock-Paper-Scissor with me ?\n=> ");

    scanf("%c", &userInput);

    if(userInput == 'y' || userInput == 'Y'){
        unsigned short random_number = rand()%3;

        values[MachineAnswer] = values[random_number];

        printf("\nRocks-Paper-Scissor\n=> ");
        scanf(" %c", &userInput);

        
        userInput = tolower(userInput);


        if(userInput == values[MachineAnswer]){
            printf("\nDraw");
            
           
        }

        else if((userInput == 'r') && (values[MachineAnswer] == 's')){
            printf("\nCongratulations, You win ");
        }

        else if((userInput == 'r') && (values[MachineAnswer] == 'p')){
            printf("\nI winnnnn");
        }

        else if((userInput == 'p') && (values[MachineAnswer] == 'r')){
            printf("\nCongratulations, You win ");
        }

        else if((userInput == 'p') && (values[MachineAnswer] == 's')){
            printf("\nI winnnnn");
        }
        
        else if((userInput == 's') && (values[MachineAnswer] == 'r')){
            printf("\nI winnnnn");
        }

        else if((userInput == 's') && (values[MachineAnswer] == 'p')){
            printf("\nCongratulations, You win ");
        }



    }else{
        printf("\nNo :(");
    }

    return 0;
}