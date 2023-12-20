/* Include Section Start */
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
/* Include Section Stop */



void initializeStack(Stack *stack){
    
    stack->top = -1;
}


int isEmpty(Stack *stack){

    return stack->top == -1;
}

void push(Stack *stack, int item){


    if(stack->top == INDEX_Last_element){
        printf("\n!! Stack is FULL !!\n");
    }

    // notice this prefix operator for top variable in struct named stack
    stack->items[++(stack->top)] = item;
    
}


int pop(Stack *stack){

    if(isEmpty(stack)){
        printf("\n!! Stack is EMPTY !!\n");
        return -1;
    }

    // notice this postfix operator for top variable in struct named stack

    return stack->items[(stack->top)--];
}


int peek(Stack *stack){
    if(isEmpty(stack)){
        printf("\n!! Stack is EMPTY !!\n");
        return -1;
    }

    return stack->items[(stack->top)];
}