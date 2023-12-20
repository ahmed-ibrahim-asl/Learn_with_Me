#ifndef _QUEUE__

#define _QUEUE__
#define MAX_SIZE 10
#define Index_last_element (MAX_SIZE - 1)

typedef struct
{
    int items[MAX_SIZE];

    int front;
    int back;
} Queue;

void initialize_Queue(Queue *q1); //![x]
int IsEmpty(Queue *q1);           //![x]
int IsFull(Queue *q1);            //![X]

void push_in_queue(Queue *q1, int item); //![X]
int pop_from_queue(Queue *q1);           //![X]
int peek_in_queue(Queue *q1);            //![X]
#endif
