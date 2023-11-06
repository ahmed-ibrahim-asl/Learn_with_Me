#include <iostream>
using namespace std;

int main(){

    int x = 20;

    int* ptr = &x;

    // what if we want to create pointer without having to create VAR first
    int *ptr = new int(20);

    return 0;
}