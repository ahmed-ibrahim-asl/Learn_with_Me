/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

/*
    Job: write a program that reads a positive integer and checks if it is a prime number.
*/


int main(){
    int userInput_number = 0;
    char flag = 0x00;

    printf("Enter Number and i can check if it's a prime number or not\n");


    printf("Number:");
    scanf("%d",&userInput_number);


    for(int i = 2; i < userInput_number; i++){

    
        if(userInput_number%i == 0){
            flag = 1;
            break;
        }
    }


    if(flag){
        printf("[#] Given Number is not a prime number.\n");
    }else{
        printf("[#] Given Number is a prime number.\n");
    }
}
