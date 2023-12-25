/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */


/* Function Prototype Start */
char all_identical(char *givenString);
/* Function Prototype Stop */

int main(){

    printf("%d", all_identical("AhAmed") );
    return 0;
}

char all_identical(char *givenString){

    int size = strlen(givenString);
    short sum = 0;

    for(int i=0; i<size; i++){
        sum = 0;        
        for(int j=0; j<size; j++){
            if(givenString[i] == givenString[j])
                sum+=1;
        }

        if(sum > 1)
            return 0;

    }

    return 1;
}