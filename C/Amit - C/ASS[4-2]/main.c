/*
    name: mr-h0n3y
    job: 
        write a program to reverse words in a string
    date: 22/11/2023
*/

/* Include section start */
#include <stdio.h>
#include <string.h>
/* Include section stop */

int main(){
    char string[20]; 
    scanf("%s", &string);

    

    for(int i = strlen(string)-1; i>=0; --i){
        printf("%c", string[i]);
    }
        
    return 0;
}
        
