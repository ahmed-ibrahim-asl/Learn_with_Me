/*** Include section start ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "function.h"
/*** Include section stop ***/

struct customer *dataBase[MaxNumber_of_Users];
short CurrentNumber_Of_Users = 0;





void NewAccount() {    
    clearScreen();
    printf("--------------------------\n");
    printf("--- Create New Account ---\n");
    printf("--------------------------\n");
    
    
    char Name_temp[maxLengthOf_UserName];
    dataBase[CurrentNumber_Of_Users] = malloc(sizeof(struct customer));

    if(dataBase[CurrentNumber_Of_Users] == NULL) {
        perror("\nError: Memory allocation failed.");
        exit(1); // #
    }

    printf("\nHey, what's your name?\n=> ");
    scanf(" %[^\n]", Name_temp);
    strcpy(dataBase[CurrentNumber_Of_Users]->name, Name_temp);

    printf("\nWhat initial deposit would you like to make to fund your account?\n=> ");

    // Clear the input buffer before reading the balance
    while(getchar() != '\n');

    scanf("%ld", &dataBase[CurrentNumber_Of_Users]->balance); // Use %ld for a long

    printf("\nEnter your PIN\n=> ");
    scanf("%hd", &dataBase[CurrentNumber_Of_Users++]->pin);

    userInterface(Name_temp);

    fflush(stdout); // Add this line to flush the output buffer
}

short userInDataBaseOrNot(char *accountName, short size)
{
    // (-1 -> error) (| index)

    for (int index = 0; index < MaxNumber_of_Users; ++index)
    {
        if (strcmp(dataBase[index]->name, accountName) == 0)
        {
            return index;
        };
    }

    return -1;
}



void loginDisplay(void){
    char Name_temp[maxLengthOf_UserName];
    short PIN_temp;
    

    clearScreen();
    printf("---------------------\n");
    printf("--- Login Display ---\n");
    printf("---------------------\n");


   printf("UserName: \n=> ");
   scanf("%s", Name_temp);

   printf("Pin: \n=> ");
   scanf(" %hd", &PIN_temp);

   short searchResult = userInDataBaseOrNot(Name_temp, strlen(Name_temp));






   if (( searchResult >= 0) && (dataBase[searchResult]->pin == PIN_temp) ){
            
            //! you need to find a way to set name to userInterface
            userInterface(Name_temp);

   }else{
        printf("\n Invalid Credentials");
   };
}



void mainDisplay(void)
{
    short userInput = 0;

    again:
    clearScreen();
    printf("-----------------------------\n");
    printf("--- Welcome to Crazy Bank ---\n");
    printf("-----------------------------\n");

    printf("What do you want to do ?    \n");
    printf("[1] Create New account      \n");
    printf("[2] Login                   \n");
    printf("[3] Exit                    \n");

    printf("=> ");
    scanf(" %hd", &userInput);

    switch (userInput)
    {
    case 1:
        NewAccount();
        break;

    
    case 2:
        loginDisplay();
        break;
    
    case 3:
        exit(0);
        break;

    default:
        printf("\n!! Invalid Input !!");
        Sleep(1000);
        goto again; // jump back to 'WithDraw Menu'

        break;
    }
    
}

void userInterface(char* userName){
    short userInput = 0;
    again:
    clearScreen();
    printf("-----------------------\n");
    printf("--- Welcome %s -----       \n", userName);
    printf("-----------------------\n");

    printf("[1] Do you want to WithDraw Money ?\n");
    printf("[2] Do you want to Deposit Money ?\n");
    printf("[3] Do you want to View your balance ?\n");
    printf("[4] Logout                          \n");

    printf("=> ");
    scanf(" %hd", &userInput);


    switch(userInput){
        case 1:                         // 'with Draw Money'
            withDrawMoney(userName);
            break;
        case 2:                        //!  'Deposite Money'
            
        case 3:                       
            viewBalance(userName);
            break;

        case 4:                      //  'Logout'
            mainDisplay();    
            break;

        
        default:
            printf("!! Invalid Input !!");
            goto again; // jump back to 'WithDraw Menu'
    }

}


void viewBalance(char *userName){
    short userIndex = userInDataBaseOrNot(userName, strlen(userName));


    printf("Balance: %ld",  dataBase[userIndex]->balance);
   
}


void withDrawMoney(char* userName){
    int userInput = 0;
    short userIndex = userInDataBaseOrNot(userName, strlen(userName));

    again:
    clearScreen();
    printf("---------------------\n");
    printf("--- WithDraw Menu ---\n");
    printf("---------------------\n");

    printf("[1] $20\n");
    printf("[2] $50\n");
    printf("[3] $100\n");   
    printf("[4] Custom Amount\n");
    printf("[5] Cancel Transaction \n");

    printf("=> ");
    scanf(" %d", &userInput);

    switch(userInput){
        case 1:
            if( (dataBase[userIndex]->balance) > 20){

                dataBase[userIndex]->balance -= 20;
                printf("Loading");

                for(int temp = 0; temp < 10; ++temp){
                    printf(".");
                    Sleep(15);
                }

                printf("\nTake your money $20");
                Sleep(1000);
                userInterface(userName);

            }else{
                printf("Not enough funds");
                Sleep(10);
                goto again; // jump back to 'With'
            }

            break;
        case 2:
            if( (dataBase[userIndex]->balance) > 50){

                dataBase[userIndex]->balance -= 50;
                printf("Loading");

                for(int temp = 0; temp < 10; ++temp){
                    printf(".");
                    Sleep(15);
                }

                printf("\nTake your money $50");
                Sleep(1000);
                userInterface(userName);

            }else{
                printf("Not enough funds");
                Sleep(1000);
                goto again; // jump back to 'With'
            }

            break;
        case 3:  
            if( (dataBase[userIndex]->balance) > 100){

                dataBase[userIndex]->balance -= 100;
                printf("Loading");

                for(int temp = 0; temp < 10; ++temp){
                    printf(".");
                    Sleep(15);
                }

                printf("\nTake your money $100");
                Sleep(1000);
                userInterface(userName);

            }else{
                printf("Not enough funds");
                Sleep(1000);
                goto again; // jump back to 'With'
            }

            break;

        case 4:
            printf("\nHow Much do you want ?\n");
            printf("=> ");
            scanf(" %d", &userInput);

            if((dataBase[userIndex]->balance) > userInput){
                dataBase[userIndex]->balance -= userInput;
                printf("Loading");

                for(int temp = 0; temp < 10; ++temp){
                    printf(".");
                    Sleep(15);
                }

                printf("\nTake your money $%d", userInput);
                Sleep(1000);
                userInterface(userName);
            }else{
                printf("Not enough funds");
                Sleep(1000);
                goto again; // jump back to 'With'
            }


        case 5:
           userInterface(userName); 
        break;
        
        default:
            printf("!! Invalid Input !!");
            Sleep(1000);
            goto again; // jump back to 'WithDraw Menu'
    }
    
}

void Deposit(char* userName){
    int userInput = 0;
    short userIndex = userInDataBaseOrNot(userName, strlen(userName));

    again:
    clearScreen();
    printf("--------------------\n");
    printf("--- Deposit Menu ---\n");
    printf("--------------------\n");

    printf("[1] $20\n");
    printf("[2] $50\n");
    printf("[3] $100\n");   
    printf("[4] Custom Amount\n");
    printf("[5] Cancel Transaction \n");

    printf("=> ");
    scanf(" %d", &userInput);

    switch(userInput){
        case 1:
            dataBase[userIndex]->balance += 20;
            break;
        case 2:
            dataBase[userIndex]->balance += 50;
            break;
        case 3:
            dataBase[userIndex]->balance += 100;
            break;

        case 4:
            printf("=> ");
            scanf(" %d", &userInput);
        case 5:
            userInterface(userName); 
            break;
        
        default:
            printf("\n!! Invalid Input !!");
            Sleep(1000);
            goto again; // jump back to 'WithDraw Menu'

    }
}

void clearScreen() {
    #ifdef WINDOWS
        system("cls");
    #else
        system("clear");
    #endif
}


