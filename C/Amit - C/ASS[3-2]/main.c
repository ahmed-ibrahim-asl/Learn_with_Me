/* Include Section Start*/
#include <stdio.h>
#include <math.h>
/* Include Section stop*/

/*
    AuthorName: mr-h0n3y
    Date: 22-11-2023
    Name: assignment 2-2

    job: wirte a program to display fibonacci sequence using
    recursion method and interative method
*/

int Recursive_fibonacci(int noTerms);
void iterative_fibonacci(int noTerms);
int main(){
    int NoTerms = 0;
    printf("Enter Number of terms: ");
    scanf("%d", &NoTerms);


    iterative_fibonacci(NoTerms);

};
// 0 1 1 2 3 4 7

void iterative_fibonacci(int noTerms){
    /*
        as name refering next refers to the current element we going to print
        and preivious refers to an element we printed before the current
    */
    int previous = 0, next = 1;

    for(int i = 0; i < noTerms; i++){
        if(i<=1){
            
            next = i;
        } else{
            
            // calculating the new fibonacci sequence 
            next = previous + next;      
            
            // we making previous pointing to the element before the current elelment
            previous = next - previous;
        }
        printf("%d ", next);
    }
}



int Recursive_fibonacci(int noTerms){
 
    if(noTerms == 0)
        return 0;
    else if(noTerms == 1)
        return 1;

    return Recursive_fibonacci(noTerms-1) + Recursive_fibonacci(noTerms-2);
}