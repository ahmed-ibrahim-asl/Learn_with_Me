/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */

void upperCase_to_lower(char *string);

int main(){
    char string[] = "AhMed";

    upperCase_to_lower(string);

    printf("=> %s", string);



    return 0;
}

void upperCase_to_lower(char *string){
    int size = strlen(string);


    for(int iterator = 0; iterator < size; iterator++){

        if(string[iterator] > 'A' && string[iterator] > 'Z'){
            continue;
        }
        else{
            string[iterator] += 32;
        }
    }

}