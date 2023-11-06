#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
} *head = NULL;

void insertNode(int value);
void deleteNode(int Node);
void display();

void insert_At_Beg(int value);
void delete_Beg();
void delete_end();

int main(){

    for(int i = 0; i<=10; i++){
        insertNode(i);
    }

    display();

    deleteNode(5);
    display();
    cout << "---------------------------------\n";
    insert_At_Beg(100);
    display();
    cout << "------------------------------\n";
    
    delete_Beg();
    
    display();
    cout << "------------------------------\n";
    delete_end();
    display();


}

void deleteNode(int value){
    node *current = head;

    // if node is the head 
    if(current->data == value){
        head = current->next;
        free(current);
        return;
    }

    else{
        node *previous = head;
        while(current->data != value){
            previous = current;
            current = current->next;
        }

        previous->next = current->next;
        free(current);

    }
    

}
void display(){
    node * current = head;
    if(current == NULL)
        cout << "list is empty" << endl;

    else{
        while (current != NULL){
            cout << current->data << endl;
            current = current->next;
        
        }
        cout << endl;
    }
}
void insertNode(int value){


    node* new_node = new node;
    new_node->data = value;

    if(head == NULL){ //the list is empty
        head = new_node;
        new_node->next = NULL;
    }

    else{ // list is not empty
        node * last = head;
        
        while(last->next != NULL)
            last = last->next;
        
        last->next = new_node;
        new_node->next = NULL;
    
    }

}

void insert_At_Beg(int new_value){

    node *new_node = new node;
    new_node->data = new_value;
    new_node->next = head;
    
    head = new_node;
}

void delete_Beg(){


    /*
        there are Three cases 
        First: if the linked list is empty -> error message
        second: if the linked list has only one element -> it's going to delete the node and head point to NULL
        third: if the link list has more than two elements -> normal logic

    */

    // First condition
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }

    else{
        node * first_node = head;
        head = first_node->next;
        
        // incase the list has one element we 
        if(head == NULL)
            delete(head);

        delete(first_node);

    }

    
}


void delete_end(){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }

    else if(head->next == NULL){
        delete(head);
        return;
    }

    else{
        node* current = head;

        while(current->next->next != NULL){

            current = current->next;
        }

       delete(current->next);
       current->next = NULL;
        
    }

}