/* Include Section Start */
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
/* Include Section Stop */



int main(){

    Stack s1;

    initializeStack(&s1);

    push(&s1, 1);
    push(&s1, 2);
    push(&s1, 3);


    printf("%d", pop(&s1));

    return 0;
}