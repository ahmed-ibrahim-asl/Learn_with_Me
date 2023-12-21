/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */



// Job: write C function that count the number of ones in the binary represtation of 32-bit integers

int maxNumberZeros(char *number);
int main(){

    char number[32] = {0};
    fgets(number, 33, stdin);
    
    printf("\n[#] Result: %d\n", maxNumberZeros(number));
 
    return 0;
}


int maxNumberZeros(char *number){
    int max_zeros = 0;
    int current_zeros = 0;

    char *ptrC = number;



    while(*ptrC != '\n' && *ptrC != '\0' ){
        if(*ptrC == '0' ){

            ++current_zeros;
       
        }else{

            if(max_zeros < current_zeros){
                max_zeros = current_zeros;
                current_zeros = 0;
            }else{
                current_zeros = 0;
            }
        }
        ++ptrC;

    }

    return max_zeros;
}



