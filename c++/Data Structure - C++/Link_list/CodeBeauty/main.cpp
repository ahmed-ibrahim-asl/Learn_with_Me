#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;
};

void printlist(Node* node){
    while(node != NULL) {

        cout << node->value << endl;
        node = node->next;
    }
}

void insertAt_Front(Node** head, int newvalue){
    // alocate memory for the new node and set value for it
    Node *newnode = new Node();
    newnode->value = newvalue;
    

    // make the new node to point to the current head
    newnode->next = *head;
    
    *head = newnode;

}

void insertAt_end(Node** head, int newvalue){
    
    // Prepare for the new node
    Node *newEnd = new Node();
    newEnd->value = newvalue;
    newEnd->next = NULL;

    /* IF is list is empty
       means the passed pointer is point to null
       so we will create new node in the list

    */
    if(*head == NULL)
        *head = newEnd;

    // list is not empty and we need to find the end of the list 
    else{
        Node *last = *head;
        while(last->next != NULL){
            last = last->next;
        // make the last element point to the newEnd
        last->next = newEnd;
        }
    }

}

void isnertAfter(Node *previous, int newvalue){
    
    // 1- check if we have valid argument
    if(previous == NULL)
        cout << "Previous node is NULL" << endl;
    
    else{
        // 2- Prepare the new node

        Node *newNode = new Node();
        newNode ->value = newvalue;
        newNode->next = previous->next;
        previous->next = newNode;


        
    }
        
}


int main(){

    // Allocating memory
    // usually the first element in list called head
    Node* head = new Node(); 
    Node* second = new Node();
    Node* third = new Node();

    // set values for them
    head->value = 1;
    second->value = 2;
    third->value = 3;

    // link the elements together
    head->next = second;
    second->next = third;
    third->next = NULL;

    cout << "Linked list elements: " << endl;
    printlist(head);
    
    cout << "\n";

    isnertAfter(second, 99);

    printlist(head);
}