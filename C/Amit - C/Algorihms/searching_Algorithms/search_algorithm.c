/* Include Section Start */
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include "search_algorithm.h"
/* Include Section End */



void linearSearch(int *array, int size, int searchFor){
    /*
        #   The goal is find all occurances of passed Number and return there positions 
        #   This was an extra assignment in the algorithms session
    */
    char flag = 0x00;
    int index = 0;
    int* positions = calloc(size, sizeof(int));
    
    


    for(int mainIndex = 0; mainIndex < size; mainIndex++){

        if(array[mainIndex] == searchFor){
            positions[index++] = mainIndex;
        }
    }

    if(array[positions[0]]  == searchFor ){
        index = 0;
        printf("\n\nItem {%d} was found At Indexs: \n", searchFor);
        

        printf("[ ");
        while(positions[index] != 0 &&    index != size-1){
            printf("%d ", positions[index]);
            ++index;
        }
        printf("] ");
    }


    free(positions);
    positions = NULL;
}

void binarySearch(int *array, int size, int start, int end, int searchFor){
    buble_Sort(array, size);
    

    int middle = (start+end-1)/2;

   
    if(array[middle] == searchFor){
        printf("\n\nItem {%d} was found at Index {%d}: \n", searchFor, middle);
    
    }else if(array[middle] < searchFor){
        binarySearch(array, size, middle+1, end, searchFor);
        

    }else if(array[middle] > searchFor){
        binarySearch(array, size, start, middle-1, searchFor);
        
    }else{
        printf("Item {%d} was not found", searchFor);

    }

}