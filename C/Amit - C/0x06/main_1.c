/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


int sum(const int *array, const int size);

int main(){
    int int_elements [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("sum of array = %d", sum(int_elements, 10));

    return 0;
}


int sum(const int *array, const int size){
    int int_Result = 0;
    const int *int_Ptr = array; 

    for(int i = 0; i < size; i++){
        int_Result += *(int_Ptr+i);
    }

    return int_Result;
}