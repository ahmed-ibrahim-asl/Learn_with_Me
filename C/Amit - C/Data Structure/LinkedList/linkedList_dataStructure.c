/** Include Section Start **/
#include <stdio.h>
#include <stdlib.h>

#include "linkedList_dataStructure.h"
/** Include Section Stop **/



Node_t *SingleNode_createNode(void){

    Node_t* start = NULL;
    Node_t* temp = NULL;
    int NumberOfNodes = 0;


    UserInput:
    printf("\nEnter Number of Nodes you want to create: ");
    scanf("%d", &NumberOfNodes);

    if(NumberOfNodes <= 0){
        printf("Invalid Input.");
        goto UserInput;
    }

    for(unsigned int iterator = 0; iterator < NumberOfNodes; iterator++){

        Node_t* newNode = (Node_t *)malloc(sizeof(Node_t));

       
      

        if(newNode != NULL){
            printf("Data: ");
            scanf("%d", &newNode->data);
            newNode->next = NULL;

            if(start != NULL){
                // This not the first Node // 
                temp->next = newNode;
                temp = newNode;
            }else{
                // This is the First Node in created Linked List //
                start = newNode;
                temp = start;
            }
        }else{
            

            printf("Memory allocation failed.\n");
            return start;
        }
    

    }


    // returning the header of linked list 
    return start;
}

void SingleList_DisplayList(Node_t *start){

    Node_t *ptr = start; 

    printf("[ ");
    while(ptr != NULL){
        printf("%d ", ptr->data);

        ptr = ptr->next;
    }
    printf("]\n");
}

Node_t *SingleNode_InsertNodeAtBeginning(Node_t *start, int data){

    if(start == NULL){
        printf("Passed list is empty\n");
        return NULL;
    }

    Node_t *temp = (Node_t *)malloc(sizeof(Node_t));;
    if(temp == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }else{
        temp->data = data;
        temp->next = start;
    }

    return temp;
}

Node_t *SingleNode_InsertNodeAtEnd(Node_t *start, int data){
    Node_t *Iterator = start;
    Node_t *NewNode = (Node_t *)malloc(sizeof(Node_t));
    
    // Find the end of passed linkedlist
   
    while(Iterator->next != NULL){
        Iterator = Iterator->next;
    }

    // Now temp should be pointing to the end node of linkedlist 
    Iterator->next = NewNode;
    NewNode->data = data;
    NewNode->next = NULL;

    return start;
}


Node_t *SingleList_DeleteCertainNode(Node_t *start, int Target_Value){
    Node_t *Iterator = start;
    Node_t *temp = NULL;


    if(start == NULL){
        return NULL;
    }else if(start->data == Target_Value){
        temp = start;
        start = start->next;
        free(temp);

        return start;
    }




    while( (Iterator->next != NULL) && ((Iterator->next)->data != Target_Value)){

        Iterator = Iterator->next;
    }

    // 1 2 [x] 3

    temp = Iterator->next;

    Iterator->next = (temp)->next;
    free(temp);


    return start;
}


Node_t *SingleNode_InsertNodeBeforeParticularValue(Node_t *start, int data, int Target_Value){

    Node_t *Iterator = start;




    if(Iterator == NULL || (Iterator->data == Target_Value)){
        Node_t *newNode = (Node_t *)malloc(sizeof(Node_t));

        if(newNode == NULL){
            return NULL;
        }

        newNode->data = data;

        newNode->next = start; // (start == null)

        start = newNode;
        return start;
        
    }


   

    while( (Iterator->next != NULL) && ((Iterator->next)->data != Target_Value) ){
        Iterator = Iterator->next; 
    }

    Node_t *newNode = (Node_t *)malloc(sizeof(Node_t));
    if(newNode == NULL){
        return NULL;
    }

    newNode->data = data;

    newNode->next = Iterator->next;
    Iterator->next = newNode;


    return start;
}




Node_t *SingleNode_InsertNodeAfterParticularValue(Node_t *start, int data, int Target_Value){


    Node_t *Iterator = start;
    if(Iterator == NULL ){
        return NULL;
        
    }



    while( (Iterator != NULL) && ((Iterator)->data != Target_Value) ){
        Iterator = Iterator->next; 
    }

    Node_t *newNode = (Node_t *)malloc(sizeof(Node_t));
    if(newNode == NULL){
        return NULL;
    }else if(Iterator != NULL){

        newNode->data = data;

        (newNode->next) = (Iterator->next);
        (Iterator->next) = newNode;
    }


    return start;
}


int SingleList_CountNode(Node_t *start){

    unsigned int sum = 0;
    Node_t *Iterator = start;

    if(Iterator == NULL){
        return -1;
    }

    while(Iterator != NULL){
        sum += 1;
        Iterator = Iterator->next;
    }


    return sum;
}

int SingleList_Search(Node_t *start, int Target){
    int pos = 0;
    Node_t *Iterator = start;

    if(Iterator == NULL){
        return -1;
    }


    while(Iterator != NULL){


        if(Iterator->data == Target){
            return pos;
        }

        pos += 1;
        Iterator = Iterator->next;
    }

    return -1;
}
