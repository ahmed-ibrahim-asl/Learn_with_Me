#include <iostream>

using namespace std;

// Simple DataBase of Library 

struct Book{
    string name, author;
    int pages;
    double price;
} b[10]; // if you use this way this mean's it's going to be global in the entire program

int main(){
    // you can set the data for the new data type{object} either that 
    Book b1 = {"Hacking hero to zero", "Dr. Ahmed Asl", 2000, 500};

    // or 

    Book b2;
    b2.name = "Beginner";
    b2.author = "ahmed";
    b2.pages = 2;
    b2.price = 0;
    


    return 0;
}