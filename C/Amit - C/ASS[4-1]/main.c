/*
    name: mr-h0n3y
    job: 
        write a program that ask you to enter a value of variable
        int x pass the address of x to a function called edit
        increment the value of x by 1 inside the function.
        print the value of x in the main function before and after
        calling the function edit
    date: 22/11/2023
*/


/*Include section start*/
#include <stdio.h>
/*Include section stop*/

void edit(int* x);
int main(){
    int x = 0;
    printf("- Welcome - \n");
    printf("Application for Function passing by reference\n");

    printf("\nEnter Number: ");
    scanf("%d", &x);


    printf("Before calling edit - (x value): %d", x);
    edit(&x);
    printf("\nAfter calling edit - (x value): %d", x);

}

void edit(int* x){
    ++*x;
}