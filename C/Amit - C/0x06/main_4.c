/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


int smallest_in_array(int *array, int size);

int main(){

    int array1[5] = {1, 2, 3, 4, 5};


    printf("%d\n", smallest_in_array(array1, 5) );


    return 0;
}



int smallest_in_array(int *array, int size){

    int *intPtr = array; 
    int smallest_in_array = *intPtr;


    for(int i = 0; i < size; i++){

        if(smallest_in_array < *(intPtr)){
            smallest_in_array = *(intPtr++); 
        }

    }

    return smallest_in_array;
}
