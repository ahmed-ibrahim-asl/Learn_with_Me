/* Include section start */
#include <stdio.h>
/* Include section end */


// Job: write a c program to printt the index of first occurrence of a number
//      in an array. array index start from 0. if the item is not in the list print -1

int main(){
    int Number = 0;
    int array[6] = {1, 2, 3, 4, 4, 4};
    int result = 0;

    printf("[#] Enter Number to search for: ");
    scanf("%d",&Number);


    for(int i = 0; i < 6; i++){

        if(array[i] == Number){
            printf("\n[#] Location  of Number at %d", i);
            return 0;
        }
    }


        printf("\n!! [-1] Number is not in my array.!!");

    

    return 0;
}
