/* Include Section Start */
#include <stdio.h>
#include "queue.h"
/* Include Section Stop */




void initialize_Queue(Queue *q1){
    q1->front = -1;
    q1->back = -1;
}


int IsEmpty(Queue *q1){
    return q1->front == -1;
}

int IsFull(Queue *q1){
    return (q1->back == Index_last_element);
}



void push_in_queue(Queue *q1, int item){
    /*
        1. queue is full or not 
    */

    if(IsFull(q1)){
        printf("!! An item cannot be pushed into queue !!\n");
        return;
    }


    q1->front = 0;
    q1->items[++(q1->back)] = item;
}


int pop_from_queue(Queue *q1){
    /*
        it's empty ? return it's empty 
    */

   if(IsEmpty(q1)){
        printf("\n!! Given Queue is Empty !!\n");
        return -1;
    }

    int item = q1->items[(q1->front)++];


    // last element was popped rest two pointers
    if(q1->front > q1->back){
        q1->front = q1->back = -1;
    }

    return item;
}



int peek_in_queue(Queue *q1){



    return q1->items[q1->front];
}