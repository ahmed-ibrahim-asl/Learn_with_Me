/****** Include Section start ******/
#include <stdio.h>
#include <stdlib.h>
/****** Include Section stop ******/

/*
    Assignment1:
        Task: Write a program that takes a number from user using scanf
        if the number was even print the following two sentences:
            The number is odd = 0
            The number is even = 1

        and if the number was odd print the following two sentences:
            The number is odd = 1
            The number is even = 0

*/

int main(){
    int user_input_Number = 0;


    printf("Enter a number: ");
    scanf("%d", &user_input_Number);

    if(user_input_Number%2 == 0){
        // given Number is even
        printf("The number is odd = 0");
        printf("\nThe number is even = 1");

    } else if(user_input_Number % 2 != 1){
        // given Number was odd
        printf("The number is odd = 1");
        printf("\nThe number is even = 0");
    }



    return 0;
}
