/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */



int count_holes(int int_number);
int main(){
    int int_userInputNumber = 0;

    printf("[#] I can count the number of holes inside any given Number.\n");

    printf("Number: ");
    scanf("%d",&int_userInputNumber);

    printf("[#] Number of Holes: %d", count_holes(int_userInputNumber));
}

int count_holes(int int_number){

    int holes_counter = 0;
    int holes_number_gude[10] = {
        1, 0, 0, 
        0, 0, 0,
        1, 0, 2,
        1
    };




    while(int_number != 0){
        /*in: 153,   3 5 1*/

        holes_counter += holes_number_gude[(int_number%10)];
        int_number /= 10;
    }

    return holes_counter;
}
