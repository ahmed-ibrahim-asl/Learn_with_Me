/* Include Section start */
#include <stdio.h>
#include <string.h>
/* Include Section stop */


/**
 * JOB : write a program that print your name and your grade in a new line  
*/



int main(){
    int grade = 0;
    char Name[20];

    printf("Enter your Name: ");
    fgets(Name, 20, stdin);
    
    // Remove newline character

    /*
        strcspn - return the index of passed character inside given array
    */
    Name[strcspn(Name, "\n")] = '\0';


    printf("Enter your grade: ");
    scanf("%d", &grade);


    printf("\nYour Name {%s} \nGrade {%d}", Name, grade);

    return 0;
}