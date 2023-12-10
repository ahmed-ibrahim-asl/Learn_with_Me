#ifndef linkedList_dataStructure_H_
#define linkedList_dataStructure_H_

typedef struct node
{

    int data;
    struct node *next;
} Node_t;

//? Creation ?//
Node_t *SingleNode_createNode(void);  //! [DONE]

//? Insert ?//
Node_t *SingleNode_InsertNodeAtBeginning(Node_t *start, int data); //! [DONE]
Node_t *SingleNode_InsertNodeAtEnd(Node_t *start, int data); //! [DONE]

Node_t *SingleNode_InsertNodeBeforeParticularValue(Node_t *start, int data, int Target_Value); //! [DONE]
Node_t *SingleNode_InsertNodeAfterParticularValue(Node_t *start, int data, int Target_Value); //! [DONE]

//? Traverse ?//
void SingleList_DisplayList(Node_t *start); //! [Done]

//? Delete ?//
Node_t *SingleList_DeleteCertainNode(Node_t *start, int Target_Value); //! [Done]

//? Extra_Features ?//
int SingleList_CountNode(Node_t *start); //! [Done]
int SingleList_Search(Node_t *start, int Target);//! [Done]

#endif