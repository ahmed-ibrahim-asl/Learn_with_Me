#ifndef FUNCTIONS

#define FUNCTIONS
/*
    Task: Create a program that allows users to manage files and directories
    by performing operations such as create, delte, copy and move.
*/

// create_directory [x]
// create_file [x]
// delete_directory [x]
// delete_file [x]
// copy_file
// move_file

/*** Function Definition section start ***/
short create_directory(const char *name); // [x]
short create_file(const char *name );     // [x]
short delete_directory(const char *name ); // [x]
short delete_file(const char *name );    // [x]

short copy_file(const char *sourcePath, char *destPath);
short move_file(const char *sourcePath, char *destPath);
/*** Function Definition section stop ***/
#endif