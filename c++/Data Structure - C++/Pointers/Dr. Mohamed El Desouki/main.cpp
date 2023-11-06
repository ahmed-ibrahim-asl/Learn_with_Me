#include <iostream>
#include <unistd.h>
/*
    here I am discussing how to do time.sleep as python 
    in c++ and also how can we build swap function to swap
    values of two variables, with pointers 
    or with referenceses

*/
using namespace std;

void swapR(int &x, int &y){

    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapP(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;    
}

int main(){
    int x, y;
    cout << "Enter the two numbers ";
    cin >> x >> y;
    cout << "x: " << x << " y: " << y;
    cout << "\nSwapping Process... " << endl;
    sleep(3);
    swapP(&x, &y);

    cout << "x: " << x << " y: " << y;

}