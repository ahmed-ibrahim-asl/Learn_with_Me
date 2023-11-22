/* Include Section Start*/
#include <stdio.h>
#include <math.h>
/* Include Section stop*/

/*
    AuthorName: mr-h0n3y
    Date: 22-11-2023
    Name: assignment 2-2

    job: write a program to check if a given number is 
    Armstrong Number
*/


/* Function ProtoType section start */
char isIt_ArmstrongNumber(int number);
/* Function ProtoType section stop */


int main(){
    int userInput = 0;
    printf("- Welcome - \n");
    printf("I can Check if given Number is Armstrong Number or not\n");
    
    printf("\nEnter Number: ");
    scanf("%d", &userInput);
 
    (isIt_ArmstrongNumber(userInput)) ? printf("Given Number is Armstrong Number"):
        printf("Given Number is not Armstrong Number");

    return 0;
}

char isIt_ArmstrongNumber(int number){
    int GivenNumber = number, lastDigit = number%10;
    int sum = 0;

    while(number != 0){
        sum += pow(number%10, lastDigit);        
        number /= 10;
    }

    if(GivenNumber == sum){
        return 1;
    }

    return 0;
}