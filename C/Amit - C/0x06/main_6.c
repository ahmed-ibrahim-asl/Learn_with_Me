/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */

#define ARRAY_SIZE   (5)

void swap_arrays(int *Array_1, int *Array_2, int Array_size);

int main(){
    int array1[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int array2[ARRAY_SIZE] = {6, 7, 8, 9, 10};


    printf("\n-------------------------------------\n");
    printf("Array1: ");
    for(int iterator_index = 0; iterator_index < ARRAY_SIZE; iterator_index++){
        printf("%d ", *(array1+iterator_index));
    }


    printf("\nArray2: ");
    for(int iterator_index = 0; iterator_index < ARRAY_SIZE; iterator_index++){
        printf("%d ", *(array2+iterator_index));
    }

    printf("\n-------------------------------------\n");
    printf(":Swapping two arrays: \n");

    ///////////////////////////////////////////////////
    swap_arrays(array1, array2, ARRAY_SIZE);
    ///////////////////////////////////////////////////



    printf("Array1: ");
    for(int iterator_index = 0; iterator_index < ARRAY_SIZE; iterator_index++){
        printf("%d ", *(array1+iterator_index));
    }


    printf("\nArray2: ");
    for(int iterator_index = 0; iterator_index < ARRAY_SIZE; iterator_index++){
        printf("%d ", *(array2+iterator_index));
    }

    return 0;
}

void swap_arrays(int *Array_1, int *Array_2, int Array_size){

    for(int iterator_index = 0; iterator_index < Array_size; iterator_index++){
        // Note this style can lead to Buffer overFlow if result of sumtion is too high 
        // but it looks cool 😂

        *(Array_1+iterator_index) = *(Array_1+iterator_index) + *(Array_2+iterator_index);

        *(Array_2+iterator_index) = *(Array_1+iterator_index) - *(Array_2+iterator_index);
        *(Array_1+iterator_index) = *(Array_1+iterator_index) - *(Array_2+iterator_index);
    }
}