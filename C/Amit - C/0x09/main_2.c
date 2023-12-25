/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */

// Write C Function that use the bubble sorting algorithm to sort an integer
// array in descending order.

void buble_Sort(int *array, int size);


int main(){
    int array[5] = {2, 4, 5, 1, 3};

    buble_Sort(array, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

void buble_Sort(int *array, int size) {
    int flag = 0;
    int start = 0;
    int end = size-1;
    int temp = 0;

    for(int i = 0; i < size-1; i++){

        for(int j = 0; j < size-i-1; j++){
            
            if(array[j] > array[j+1]){
                array[j] = array[j+1] + array[j];

                array[j+1] = array[j] - array[j+1];
                array[j]   = array[j] - array[j+1]; 

                flag = 1;
            }


        }

        if(!flag){
            break;
        }
    }

    // now array is sorted in ascending order 

    while(start < end){

        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--; 
    }

}