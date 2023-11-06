#include <stdio.h>
#include <stdlib.h>



char* decimalToHexadecimal(int decimal);

int main(){
    char* hexNumber = decimalToHexadecimal(100);


    printf("%s", hexNumber);
}


