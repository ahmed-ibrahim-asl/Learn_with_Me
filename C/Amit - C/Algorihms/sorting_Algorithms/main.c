/* Include Section Start */
#include <stdio.h>
#include "sorting.h"
/* Include Section End */

/*
 The goal of this file is to showCase
 that Selection_sort algorithm works 
*/


/* Macros Section Start */
#define array_size 5
/* Macros Section End */


int main(){

    int array[array_size] = {12, 20, 2, 5, 7};


    buble_Sort(array, array_size);

    printf("\n");

    printGivenArray(array, array_size);

}