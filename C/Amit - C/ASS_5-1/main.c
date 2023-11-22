/*
    Author: mr-h0n3y
    job:
        Write a program ask the user to enter 5 numbers and 
        store it in array called arr_1 for loop
        then print the following:
            1. Print the 5 elements of arr_1
            2. max number in arr_1 and its position
            3. min number in arr_1 and its position
*/

/* Include section start*/
#include <stdio.h>
/* Include section stop*/

int max(int *given_Array, int size_givenArray, int* storePositionHere);


int main(){
    int arr_1[5] = {0};
    int position = 0;

    printf("- Welcome -");

    printf("Enter Five Number into arr_1: ");
    
    for(unsigned int i=0; i<5; i++){
        scanf("%d",&arr_1[i]);
    }



    printf("\nMaximum Number inside arr_1: %d,", max(arr_1, 5, &position));

    printf(" position: %d", position);

    return 0;
}

int max(int *given_Array, int size_givenArray, int* storePositionHere){

/**
 * arguments:
 *  job: find the maximum number inside given array 
 *  1. given_Array to perform operation on it
 *  2. size of array
 *  3. storePositionHere: to store the index of maximum element in it
 */
    int max = given_Array[0];

    for(unsigned int i = 0; i < size_givenArray; i++){

        if(max < given_Array[i]){
            max = given_Array[i];
            *storePositionHere = i;
        }
    }

    return max;
}
