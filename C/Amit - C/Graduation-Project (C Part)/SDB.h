#ifndef SDB_H_
#define SDB_H_

#include "STD.h"

typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_year;

    uint32 Course1_ID;
    uint32 Course1_grade;

    uint32 Course2_ID;
    uint32 Course2_grade;

    uint32 Course3_ID;
    uint32 Course3_grade;
} SimpleDb;

// By this way we can check it if it has content or not so own


// Check if the database is full or not
// Return if the database is full true else false
bool SDB_IsFull(); //! [Done]
uint8 SDB_GetUsedSize(); //! [Done]

bool SDB_AddEntry(); //? almost Done
bool SDB_ReadEntry(uint32 id); //! [Done]
bool SDB_IsIdExist(uint32 id); //! [Done]
void SDB_GetList(uint8 *count, uint32 *list); //! [Done]




void SDB_action(uint8 choice); //! [Done]
void SDB_DeleteEntry(uint32 id); //! [Done]




void SDB_APP();//! [Done]




#endif