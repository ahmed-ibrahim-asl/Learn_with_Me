/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */



void reverseLastTwo( char *GivenString);


int main(){


    reverseLastTwo("Ahmed");

    return 0;
}



void reverseLastTwo( char *GivenString){

    char *charPtr = GivenString;


    //Now we reached the end of the string
    while(*charPtr != '\0'){
        ++charPtr;
    }



    --charPtr;

    for(int i = 0; i < 2; i++){
        printf("%c ", *charPtr);
        --charPtr;
    }


}