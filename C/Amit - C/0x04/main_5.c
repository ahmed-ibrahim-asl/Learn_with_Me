/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */



// Job: write C function that returns 1 if the input number is a 
//      power of 2 and return 0 if the input number is power of 3
//      otherwise it shall return -1

int powerOfTwo_or_powerOfThree(int Number);
int main(){

    int Number = 0;

    printf("[#] Enter Number: ");
    scanf("%d",&Number);

    printf("\n[#] Result: %d", powerOfTwo_or_powerOfThree(Number));

    return 0;
}


int powerOfTwo_or_powerOfThree(int Number){

    if (Number <= 0) return -1; // Handle non-positive numbers

    if( (Number&(Number-1)) == 0)
        return 1;

    // Check for power of 3
    while (Number % 3 == 0) {
        Number /= 3;
    }

    return (Number == 1) ? 0 : -1;
}