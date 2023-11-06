#include <iostream>

using namespace std;

/* using union means that you are going to store one place in memory 
   means that your new object{dataType} can store or have one property
   we just set options for it

*/
union box{ 
    double weight, height;
};

int main(){
    box b1;
}