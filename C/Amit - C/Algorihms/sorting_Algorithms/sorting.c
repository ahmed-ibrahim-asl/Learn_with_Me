/* Include Section Start */
#include <stdio.h>
#include "sorting.h"
/* Include Section End */


void printGivenArray(int *array, int size) {
  

    printf("[");
    for(int MainIndex = 0; MainIndex < size; MainIndex++){
        
        printf("%d ", array[MainIndex]);
    }

    printf("]");
}




void selection_sort(int *array, int size) {

    
    int min = 0,  temp = 0;
    for(int MainIndex = 0; MainIndex < size; MainIndex++){
        min = MainIndex;

        for(int SecondaryIndex = MainIndex+1; SecondaryIndex < size; SecondaryIndex++){
            if(array[SecondaryIndex] < array[min]){
                min = SecondaryIndex;
            }else{
               
            }
            
        }


        int temp = array[MainIndex];
        array[MainIndex] = array[min];
        array[min] = temp;

    } 
}

void buble_Sort(int *array, int size) {


    int flag = 0;
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



}