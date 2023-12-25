/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */



void reverse_it(char *string);
int main(){

    char name[20] = "Ahmed";
    reverse_it(name);

    printf("%s", name);


    return 0;
}


void reverse_it(char *string){

    int start = 0;
    int end = strlen(string)-1;
    char temp = 0;

    while(start < end){

        temp = string[start];

        string[start] = string[end];
        string[end] = temp;



        start++;
        end--;
    }

}