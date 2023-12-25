/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


int myStrlen(const char *string_Ptr);


int main(){


    printf("%d", myStrlen("Ahmed"));


    return 0;
}

int myStrlen(const char *string_Ptr){
    int int_len_result = 0;


    while( *(string_Ptr++) != '\0'){

        ++int_len_result;
    }

    return int_len_result;
}