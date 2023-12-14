/* Include Section start */
#include <stdio.h>
#include <stdlib.h>
#include "SDB.h"
/* Include Section stop */


#define Max_No_students 10

SimpleDb students[Max_No_students] = {
    {1201065, 2020, 1111, 100, 2222, 97, 3333, 90},
    {1201066, 2020, 1111, 100, 2222, 97, 3333, 90},
    {1201067, 2020, 1111, 100, 2222, 97, 3333, 90},
    {1201068, 2020, 1111, 100, 2222, 97, 3333, 90},
    {1201069, 2020, 1111, 100, 2222, 97, 3333, 90},
    {1201070, 2020, 1111, 100, 2222, 97, 3333, 90}};


bool SDB_IsFull(){

    short iterator = 0;

    while(iterator != Max_No_students && students[iterator].Student_ID != 0 ){

        ++iterator;
    }

    if(iterator != Max_No_students ){
        // the dataBase is empty
        return false;
    }

    return true;
}

uint8 SDB_GetUsedSize(){



    short iterator = 0;
    while(iterator != Max_No_students && students[iterator].Student_ID != 0 ){

        ++iterator;
    }

    return iterator;
}

bool SDB_AddEntry(){
    short newEntery_index = SDB_GetUsedSize();
    short status = 0;

    if(newEntery_index == Max_No_students){
        
        printf("\n!! Students Data Base is full. !!\n");
        return false;
    }

    students[newEntery_index].Student_ID;
    students[newEntery_index].Student_year;

    printf("Enter Student Id: ");
    scanf(" %d", &students[newEntery_index].Student_ID);


    again_studentYear:
    printf("Enter Student Year: ");
    scanf(" %d", &students[newEntery_index].Student_year);


    printf("Enter Course1 id: ");
    scanf(" %d", &students[newEntery_index].Course1_ID);

    printf("Enter Course1 grade: ");
    scanf(" %d", &students[newEntery_index].Course1_grade);

    printf("Enter Course2 id: ");
    scanf(" %d", &students[newEntery_index].Course2_ID);

    printf("Enter Course2 grade: ");
    scanf(" %d", &students[newEntery_index].Course2_grade);

    printf("Enter Course3 id: ");
    scanf(" %d", &students[newEntery_index].Course3_ID);


    printf("Enter Course3 grade: ");
    scanf(" %d", &students[newEntery_index].Course3_grade);


    return true;
}

bool SDB_ReadEntry(uint32 id){


    short iterator = 0;
    bool flag = false;

    while(students[iterator].Student_ID != id){

        if(students[iterator].Student_ID == id){
            flag = true;
            break;
        }

        ++iterator;
    }


    if(flag == false){
        return false;
    }

    printf("Student ID: %d", students[iterator].Student_ID);
    printf("\nStudent Year: %d", students[iterator].Student_year);

    printf("\n\nCourse1_ID: %d", students[iterator].Course1_ID);
    printf("\nCourse2_grade: %d", students[iterator].Course1_grade);

    printf("\n\nCourse2_ID: %d", students[iterator].Course2_ID);
    printf("\nCourse2_grade: %d", students[iterator].Course2_grade);

    printf("\n\nCourse3_ID: %d", students[iterator].Course3_ID);
    printf("\nCourse3_grade: %d", students[iterator].Course3_grade);

}

bool SDB_IsIdExist(uint32 id){


    short iterator = 0;
    bool flag= false;

    while(students[iterator].Student_ID != id){

        if(students[iterator].Student_ID == id){
            return true;
        }

        ++iterator;
    }


    return false;

}


void SDB_GetList(uint8 *count, uint32 *list){



    *count = 0;

    while(students[*count].Student_ID != 0 ){

        list[*count] = students[*count].Student_ID;
        ++*count;
    }


    for(int iterator = 0; iterator < *count; ++iterator){
        list[iterator] = students[iterator].Student_ID;
    
    }

}


void SDB_DeleteEntry(uint32 id){

    short iterator = 0;
    bool found = false;


    // Find the student with the given ID
    for (iterator = 0; iterator < Max_No_students; ++iterator) {
        if (students[iterator].Student_ID == id) {
            found = true;
            break;
        }
    }

    if(found){
        for(int i = iterator; i < Max_No_students; ++i){
            students[i] = students[i+1];
        }

        // then we ensure that last element is set to zero
        students[Max_No_students-1].Student_ID = 0;

        printf("Student with ID %d has been deleted.\n", id);


    }else{
        printf("Student with ID %d not found.\n", id);    
    }

}








void SDB_action(uint8 choice){
    uint32 userInput = 0;
    uint8 count = 0;
    uint32 list[10];

    switch (choice)
    {
    case 1:
        SDB_AddEntry();
        break;

    case 2:
        SDB_GetUsedSize();
        break;
    
    case 3:
        printf("\nEnter Student ID: ");
        scanf(" %d",&userInput);

        SDB_ReadEntry(userInput);
        break;

    case 4:
        SDB_GetList(&count, list);
        break;

    case 5:
        printf("\nEnter Student ID: ");
        scanf(" %d",&userInput);

        SDB_IsIdExist(userInput);
        break;

    case 6:
        printf("\nEnter Student ID: ");
        scanf(" %d",&userInput);
        
        SDB_DeleteEntry(userInput);
        break;

    case 7:
        SDB_IsFull();
        break;

    case 8:
        printf("\nGOOD BYE ");
        break;

    default:
        printf("\n Wrong Input \n");
        break;
    }
}

void SDB_APP(){
   short userInput = 0;



    while(userInput != 8){

    printf("\n1. To add entry, enter 1");
    printf("\n2. To get used size in database, enter 2");
    printf("\n3. To read student data, enter 3");
    printf("\n4. To get the list of all student IDs, enter 4");
    printf("\n5. To check is ID is existed, enter 5");
    printf("\n6. To delete student data, enter 6");
    printf("\n7. To check is database is full, enter 7");
    printf("\n8. To exit enter 8");


    printf("\n=> ");
    scanf(" %d",&userInput);
    SDB_action(userInput);

    
    }
}