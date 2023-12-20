/** Include Section Start **/
#include <stdio.h>
#include <stdlib.h>

#include "linkedList_dataStructure.h"
/** Include Section Stop **/


/**
 * Main Purpose of this File is to test Functionality of functions
*/



int main(){
    Node_t *start = SingleNode_createNode();


    SingleList_DisplayList(start);

    start = SingleNode_InsertNodeAtEnd(start, 99);


    SingleList_DisplayList(start);

    SingleNode_InsertNodeAfterParticularValue(start, 88, 1);
 SingleList_DisplayList(start);
    return 0;
}