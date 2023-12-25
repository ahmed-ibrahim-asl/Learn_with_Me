/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */


void selection_sort(int *array, int size);

int main(){
    int array[5] = {2, 4, 5, 1, 3};

    selection_sort(array, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }



    return 0;
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
