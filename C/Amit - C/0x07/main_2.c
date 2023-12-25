/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */


typedef struct{
    int int_RealPart;
    int int_imag;

}complex_number;



void add_complex_number(complex_number complexNumber1, complex_number complexNumber2);


int main(){
    complex_number comp1, comp2;
    comp1.int_RealPart = 12;
    comp1.int_imag = 12;

    comp2.int_RealPart = 12;
    comp2.int_imag = 12;


    add_complex_number(comp1, comp2);

    return 0;
}



void add_complex_number(complex_number complexNumber1, complex_number complexNumber2){
    complex_number result;
    

    result.int_RealPart = complexNumber1.int_RealPart + complexNumber2.int_RealPart;
    result.int_imag = complexNumber1.int_imag + complexNumber2.int_imag;


    printf("Result: %d+j%d", result.int_RealPart, result.int_imag);

}