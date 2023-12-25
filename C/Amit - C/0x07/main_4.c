/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */

typedef struct{
    char name[20];
    int id;
    int grade;
}student;

/* Macros Section Start */
#define SIZE_STUDENT_DB 10
/* Macros Section Stop */

/* Function ProtoType section start */
void createStudent();
void student_db_print(student *student, int size);
/* Function ProtoType section stop */

student std_DataBase[SIZE_STUDENT_DB];

int main(){

    createStudent();
    student_db_print(std_DataBase, SIZE_STUDENT_DB);
}

void createStudent(){
    char *f = NULL;
    

    for (int iterator_index = 0; iterator_index < SIZE_STUDENT_DB; iterator_index++)
    {
        
        // NAME // 
        printf("\n-Enter Name of {%d} Student: ", iterator_index+1);
        fgets(std_DataBase[iterator_index].name, 20, stdin);
        
        f = strstr(std_DataBase[iterator_index].name, "\n");
        *f = '\0'; 

        // ID //
        printf("-Enter Id of {%d} Student: ", iterator_index+1);
        scanf("%d", &std_DataBase[iterator_index].id);



        // Grade //
        printf("-Enter grade of {%d} Student: ", iterator_index+1);
        scanf("%d", &std_DataBase[iterator_index].grade);
    
        while(getchar() != '\n');
    }
    

}


void student_db_print(student *student, int size) {

    for (int i = 0; i < size; i++){
        printf("\n-------------------------\n");

        printf("Student {%d} Name: %s", i+1, student->name);
        printf("\nID: %d", student->id);
        printf("\nGrade: %d", student->grade);

        printf("\n-------------------------\n");
    }


}