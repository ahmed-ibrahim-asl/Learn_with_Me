/* Include section start */
#include <stdio.h>
/* Include section end */


// JOB: write a program that computes the nth term of the 
//      geometric series: 1, 3, 9, 27, ...
//      Run the program to compute the 10th term of the given series.



int main(){
    int x = 1;
    for(int i = 0; i < 10; i++){
      
        printf("%d  ", x);
        x*=3;
    }

    return 0;
}