/* Include section start */
#include <stdio.h>
/* Include section end */


// JOB: write a program that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9, ...



int main(){
    int x = 1;
    for(int i = 0; i < 100; i++){
      
        printf("%d  ", x);
        x+=2;
    }

    return 0;
}