#include <stdio.h>


void reverseArray(int *array, int size);
int main(){
    int arr_1[5] = {1, 2, 3, 4, 5};

    reverseArray(arr_1, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", arr_1[i]);
    }
}

void reverseArray(int *array, int size){
    int* startPoint = &array[0];
    int* endPoint = &array[size-1];
    

    while((*startPoint != array[(size-1)/2]) || (*endPoint != array[(size-1)/2])){
        
        *startPoint = *startPoint + *endPoint;
        *endPoint = *startPoint - *endPoint;
        *startPoint = *startPoint - *endPoint;
        
        ++startPoint;
        --endPoint;
    }
}


