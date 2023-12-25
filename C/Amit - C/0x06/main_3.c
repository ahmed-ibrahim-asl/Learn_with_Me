/* Include Section Start */
#include <stdio.h>
#include <stdlib.h>
/* Include Section Stop */

// I edit a little on task to make it little fun

void reverseIt(const int *array, const int size);

int main(){
    int size = 0;


    printf(":: You can give me size of array and there elements i can reverse it ::\n");

    printf("- Enter size of array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(sizeof(int)*size); 


    printf("- Enter elements: ");

    for(int i = 0; i < size; ++i){
        scanf("%d", &array[i]);
    }

    reverseIt(array, size);


    return 0;
}

void reverseIt(const int *array, const int size){
    

    for(int i=size-1; i>=0; i--){
        printf("%d ", *(array+i) );
    }
}