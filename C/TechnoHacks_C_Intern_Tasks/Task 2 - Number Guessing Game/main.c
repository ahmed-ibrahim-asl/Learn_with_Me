/****  Include Section Start ****/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
/**** Include Section Stop ****/


/**** Macros Section Start ****/
#define Max_random_Number           100
#define Half_random_Number          50
#define Half_Half_Random_Number     25
#define Max_Number_of_tries         3
/**** Macros Section Stop ****/


int main(){
    // Clear the terminal screen
    system("cls");
    
    // Initialize random seed
    srand(time(NULL)); 

    // Generate a random number
    unsigned int random_number = rand()%Max_random_Number;


    unsigned int userInput = 0;

    // checker - used to check if user get right or not 
    

    unsigned char  counter = 1;

    
    printf("I have in my mind a number between 1 and 100\nCan you guess it");
    printf("=> ");
    
    scanf(" %d", &userInput);

    

    if(userInput == random_number){
        printf("Congratulations :)");
        return 0;
    }else{
        
        while(userInput != random_number){
            // Clear the terminal screen
            system("cls");

            
            if(userInput > Half_random_Number){
                printf("\nNumber is More than %i", Half_random_Number);

                if(userInput > (Half_random_Number + Half_Half_Random_Number) && (counter >= Max_Number_of_tries) ){
                    printf("\nNumber is More than 75");
                }

                else if(userInput < (Half_random_Number + Half_Half_Random_Number) && counter >= Max_Number_of_tries){
                    printf("\nNumber is less than %i", (Half_random_Number + Half_Half_Random_Number) );
                }
            }

            else if(userInput < Half_random_Number){
                printf("\nNumber is less than %i", Half_random_Number);
                
                if(userInput > Half_Half_Random_Number && counter >= Max_Number_of_tries){
                    printf("\nNumber is More than %i", Half_Half_Random_Number);
                }

                else if(userInput < Half_Half_Random_Number && counter >= Max_Number_of_tries){
                    printf("\nNumber is less than %i", Half_Half_Random_Number);
                }


            }

         


            
            
            ++counter;
            printf("\nSorry :(,  try again\n");
            printf("=> ");
            scanf(" %d", &userInput);


        }
    }


    printf("\nCongratulations :)");

    return 0;
}