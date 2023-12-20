/* Include Section Start */
#include <stdio.h>
#include "search_algorithm.h"
#include "sorting.h"
/* Include Section End */


#define size 5


int main(){
    int array[size] = {1, 3, 3, 4, 5};


    printGivenArray(array, size);

    binarySearch(array, size,0, size-1, 3);


}