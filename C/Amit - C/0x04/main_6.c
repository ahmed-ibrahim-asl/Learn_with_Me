/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */



// Job: write C function that count the number of ones in the binary represtation of 32-bit integers


int countNumberZeros(int number);
int main(){

    int Number = 0;

    printf("[#] Enter Number: ");
    scanf("%d",&Number);

    printf("\n[#] Result: %d\n", countNumberZeros(Number));
    return 0;
}

int countNumberZeros(int number){

    int result = 0;
    int shifter_temp = 0;


    while(number != 0){

        result += ((number>>shifter_temp)&1);

        number = number>>shifter_temp++; 
    }
    
    return result;
}

