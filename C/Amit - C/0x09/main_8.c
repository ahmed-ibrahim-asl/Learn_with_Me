/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */




void concat(char *stringA, char *stringB);

int main(){
    char fname[10] = "Ahmed ";
    char lname[10] = "Asl";

    concat(fname, lname);

    printf("%s\n", fname);
    return 0;
}


void concat(char *stringA, char *stringB){


    while(*stringA != '\0'){
        stringA++;
    }

    while(*stringB != '\0'){
           
        *(stringA++) = *(stringB++);


    }
    

}

