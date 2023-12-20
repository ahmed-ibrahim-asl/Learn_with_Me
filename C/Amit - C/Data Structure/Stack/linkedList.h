#ifndef _LINKEDLIST__


/* Macros Section Start */
#define _LINKEDLIST__

#define MAX_SIZE 10
#define INDEX_Last_element  MAX_SIZE-1
/* Macros Section End */





typedef struct
{
    int items[MAX_SIZE];
    /*
        top variable may sounds at first glance redundant 
        but it we use it as pointer to point to the last 
        element we pushed then when it popped out we use
        the that index top.
    */
    int top;
} Stack;




/* Function Prototypes Section Start */ 
void initializeStack(Stack *stack); 
void push(Stack *stack, int item);
int pop(Stack *stack);

int isEmpty(Stack *stack);  
int peek(Stack *stack);
/* Function Prototypes Section Stop */


#endif
