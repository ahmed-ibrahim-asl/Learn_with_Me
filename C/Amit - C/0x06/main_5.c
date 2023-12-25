/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


void copyArrays(const int *from_array, int *to_array, const int array_size);
int main(){
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {0, 0, 0, 0, 0};

    copyArrays(array1, array2, 5);

    printf("array2: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", array2[i]);
    }

    return 0;
}

void copyArrays(const int *from_array, int *to_array, const int array_size){

    for(int i = 0; i < array_size; i++){

        *(to_array+i) = *(from_array+i);
    }
}
