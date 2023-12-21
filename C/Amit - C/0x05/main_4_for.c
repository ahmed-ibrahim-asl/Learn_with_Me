/* Include section start */
#include <stdio.h>
/* Include section end */


// JOB: write a program that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9, ...

int fibonacci(int n);

int main(){
    int n1 = 1, n2 = 1;

    int numberOfTerms = 0;



    printf("Enter Number of terms you want to display from Fibonacci: ");
    scanf("%d",&numberOfTerms);


    for(int i = 0; i < numberOfTerms; i++){

        printf("%d ", fibonacci(i));
    }

    return 0;
}


int fibonacci(int n){

    if(n == 0){
        return 0;
    } 
    
    else if(n == 1){
        return 1;
    }

    else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}