/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */



/*
    Job: write a C Function that display Prime Number between two Numbers
*/


void primeNumber_between_twoNumbers(int start, int end);


int main(){
    int start_n1 = 0, end_n2 = 0;

    
    printf("[#] Enter Number 1: ");
    scanf("%d", &start_n1);

    printf("[#] Enter Number 2: ");
    scanf("%d", &end_n2);

    primeNumber_between_twoNumbers(start_n1, end_n2);
}


void primeNumber_between_twoNumbers(int start, int end){
    char flag = 1;
    if (start < 2) start = 2; // Adjusting the lower limit to 2 if it is less.


    for(int num = start; num < end; num++){
        char flag = 1;

        for(int div = start; div<num ; div++){

            if(num%div == 0){
                flag = 0;
                break;
            }
        }


        if(flag){
            printf("%d ", num);
        }

    }


}