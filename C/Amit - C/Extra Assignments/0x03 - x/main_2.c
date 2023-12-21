/* Include Section Start */
#include <stdio.h>
#include <math.h>
/* Include Section Stop */

/*
    Job: write a program that reads a positive integer and checks if it is a perfect square.
*/


int main(){
    int n1_userInput = 0;
    int sqrtValue_int = 0;

    printf("[#] Give me Positive integer and I can check if it is a perfect square\n");

    printf("Enter Number: ");
    scanf("%d",&n1_userInput);


    sqrtValue_int =(int)(sqrt(n1_userInput));


    if( sqrtValue_int*sqrtValue_int == n1_userInput){
        printf("\n[#] Given Number is perfect square.");
    }else{
        printf("\n[#] Given Number is not perfect square.");
    }


    return 0;
}

