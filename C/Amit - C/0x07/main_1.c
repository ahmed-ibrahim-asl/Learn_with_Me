/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */



typedef struct{
    char name[20];
    char role[20];
    char marks[3];
}employee;


int main(){

    employee emp1;
    employee emp2;
    employee emp3;
    char *fPtr;

    printf("Enter the name of the first employee: ");
    // don't forget to remove '\n' and replace it with '\0'

    fgets(emp1.name, 20, stdin);
    fPtr = strstr(emp1.name, "\n");
    *fPtr = '\0';

    printf("Enter the role of the first employee: ");
    // don't forget to remove '\n' and replace it with '\0'
    fgets(emp1.role, 20, stdin);


    fPtr = strstr(emp1.role, "\n");
    *fPtr = '\0';




    for(int i = 0; i < 3; i++){
        printf("Enter mark {%d} of first employee: ", i+1);
        scanf("%d", &emp1.marks[i]);
    }

    ///////////////////////////////////////////////////////////////////////////////

    while(getchar() != '\n');
    
    fflush(stdin);
    printf("\nEnter the name of the Second employee: ");
    // don't forget to remove '\n' and replace it with '\0'
    fgets(emp2.name, 20, stdin);


    fPtr = strstr(emp2.name, "\n");
    *fPtr = '\0';
    

    printf("Enter the role of the Second employee: ");
    // don't forget to remove '\n' and replace it with '\0'
    fgets(emp2.role, 20, stdin);

    fPtr = strstr(emp2.role, "\n");
    *fPtr = '\0';
    



    for(int i = 0; i < 3; i++){
        printf("Enter mark {%d} of second employee: ", i+1);
        scanf("%d", &emp2.marks[i]);
    }

    ///////////////////////////////////////////////////////////////////////////////

    while(getchar() != '\n');
    
    fflush(stdin);
    printf("\nEnter the name of the Third employee: ");
    // don't forget to remove '\n' and replace it with '\0'
    fgets(emp3.name, 20, stdin);

    fPtr = strstr(emp3.name, "\n");
    *fPtr = '\0';
    

    printf("Enter the role of the Third employee: ");
    // don't forget to remove '\n' and replace it with '\0'
    fgets(emp3.role, 20, stdin);

    fPtr = strstr(emp3.role, "\n");
    *fPtr = '\0';
    

    for(int i = 0; i < 3; i++){
        printf("Enter mark {%d} of Third employee: ", i+1);
        scanf("%d", &emp3.marks[i]);
    }

    ///////////////////////////////////////////////////////////////////////////////



    printf("\n\n\nEmployee 1: \n");
    printf("Name: %s ", emp1.name);
    printf("\nrole: %s ", emp1.name);
    
    for(int i = 0; i < 3; i++){
        printf("\nMark {%d} of first employee: %d ", i+1, emp1.marks[i]);
    }


    printf("\n\nEmployee 2: \n");
    printf("Name: %s", emp2.name);
    printf("\nrole: %s", emp2.name);

    for(int i = 0; i < 3; i++){
        printf("\nMark {%d} of second employee: %d ", i+1, emp1.marks[i]);
    }




    printf("\n\nEmployee 3: \n");
    printf("Name: %s", emp3.name);
    printf("\nrole: %s", emp3.name);
    
    for(int i = 0; i < 3; i++){
        printf("\nMark {%d} of third employee: %d ", i+1, emp1.marks[i]);
    }


    return 0;
}