/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */



void filter(char *filter);

int main(){
    char string[] = "dsfa#ds@f";

    filter(string);

    printf("%s", string);

    return 0;
}

void filter(char *filter){
    
    // 1. length of string
    // 2. allocate similar size to given string
    // 3. research if it's a string push it to the clone 

}