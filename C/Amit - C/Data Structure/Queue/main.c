/* Include Section Start */
#include <stdio.h>
#include "queue.h"
/* Include Section Stop */



int main(){
    Queue q1;

    initialize_Queue(&q1);


    push_in_queue(&q1, 1);
    push_in_queue(&q1, 2);
    push_in_queue(&q1, 3);
    push_in_queue(&q1, 4);
    push_in_queue(&q1, 5);
    push_in_queue(&q1, 6);


    while(!IsEmpty(&q1)){
        printf("%d ", pop_from_queue(&q1));
    }

}