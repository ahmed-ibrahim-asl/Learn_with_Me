/**
 *  name: mr-h0n3y
 *  job: 
 *      create a data base for 5 students in a school using array of structs, each
 *      struct contain 4 members
 *          student name
 *          student age
 *          student degree
 *          student section
 *      Fill the data inside main function and pritn it 
 *  
 *      +point: fill all data inside the main function and pass the address of the array
 *              to a void function called print then print all data inside print function
*/

/* Include section start */
#include <stdio.h>
/* Include section end */


/* Macros section start */
#define NO_STUDENT 5
/* Macros section end */

typedef struct{
    char name[20];
    int age;
    int degree;
    int section;

} student_;

void display_schoolDataBase(student_* STUDENT);

int main(){

    student_ school[NO_STUDENT];

    printf("Enter students dataBase\n");
    for(unsigned int i=0; i<NO_STUDENT; ++i){
        printf("\nStudent No.%d \n", i+1);

        printf("Name: ");
        scanf("%s", &school[i].name);

        printf("Age: ");
        fflush(stdin);
        scanf(" %d", &school[i].age);

        printf("Degree: ");
        fflush(stdin);
        scanf(" %d", &school[i].degree);

        printf("Section: ");
        fflush(stdin);
        scanf(" %d", &school[i].section);

    }


    display_schoolDataBase(school);
    return 0;
}

void display_schoolDataBase(student_* STUDENT){
    printf("------------------------------------");
    printf("\n- Display all student database -\n");
    printf("------------------------------------\n");

    for(unsigned int i=0; i<NO_STUDENT; ++i){
        printf("\nStudent No.%d \n", i+1);

        printf("Name: %s", STUDENT[i].name);
        printf("\nAge: %d", STUDENT[i].age);
        printf("\nDegree: %d", STUDENT[i].degree);
        printf("\nSection: %d\n", STUDENT[i].section);
     
    }
}