/* Include Section Start*/
#include <stdio.h>
#include <math.h>
/* Include Section stop*/

/*
    AuthorName: mr-h0n3y
    Date: 22-11-2023
    Name: assignment 2-2

    job: Implement a program that takes from user 
    two numbers and pass them to a void function called
    swap. this function receive the two numbers in two variables 
    x and y and print the two variables then swap their values and print x and y again. 
*/

void swap(int x, int y);
int main(){

    swap(1, 2);
};

void swap(int x, int y){
    
    printf("- Values Before Swapping -\n");
    printf("x: %d y: %d\n",x,y);
    
    x = x + y;
    y = x - y;
    x = x - y;


    
    printf("- Values After Swapping -\n");
    printf("x: %d y: %d\n",x,y);
    

}
