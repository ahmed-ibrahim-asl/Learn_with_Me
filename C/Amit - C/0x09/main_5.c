/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */

int length_string(const char *string);

int main(){
    char user_input_char[20];
    char *temp_fixer;

    printf("Enter any string i can give you length of that string: ");
    
    fgets(user_input_char, 20, stdin);
    temp_fixer = strstr(user_input_char, "\n");
    *temp_fixer = '\0';


    printf("\nResult: %d", length_string(user_input_char));

}

int length_string(const char *string){
    int result = 0;



    while(*string != '\0'){
        result++;
        string++;
    }



    return result;
}