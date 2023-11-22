/**
 *  name: mr-h0n3y
 *  job: write a program to reverse array without using another array
*/

/* Include section start */
#include <stdio.h>
/* Include section end */


void reverseArray(int *array, int size);
int main(){
    int arr_1[4] = {1, 2, 3, 4};

    reverseArray(arr_1, 4);

    for(int i = 0; i < 4; i++){
        printf("%d ", arr_1[i]);
    }
}

void reverseArray(int *array, int size){

    

   
    int* startPoint = &array[0];
    int* endPoint = &array[size-1];

    while(startPoint < endPoint){
            
        *startPoint = *startPoint + *endPoint;
        *endPoint = *startPoint - *endPoint;
        *startPoint = *startPoint - *endPoint;
            
        ++startPoint;
        --endPoint;
    }
    




}


