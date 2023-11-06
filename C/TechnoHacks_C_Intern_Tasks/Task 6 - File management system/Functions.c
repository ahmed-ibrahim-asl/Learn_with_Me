/*** Include section start ***/
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "Functions.h"
/*** Include section stop ***/





/*** Function Definition section start ***/
short create_directory(const char *name){
    
    // mkdir comes from io.h library 
    if( mkdir(name) == -1){
        perror("coudln't create directory");
        return 1;
    };

    return 0;
}

short delete_directory(const char *name ){
    
    // rmdir comes from io.h library 
    if( rmdir(name) == -1){
        perror("coudln't create directory");
        return 1;
    };

    return 0;
}

short create_file(const char *name){

    FILE* ptr1 = fopen(name, "w");
    if(ptr1 == NULL){
        perror("coudln't create specified file");
        return 1;
    }


    fclose(ptr1);
    return 0;
}

short delete_file(const char *name){
    
    // remove comes from io.h library 
    if(remove(name) != 0){
        perror("couldn't delete specified file");
        return 1;
    }

    return 0;
}


short copy_file(const char *sourcePath, char *destPath){
    // 1. Read the content of the specified file
    // 2. Write or create new File in destinationPath with the readed content

    // open specified file to read content
    FILE* ptr1 = fopen(sourcePath, "r");


    // create new file to write content in it 
    FILE* ptr2 = fopen(destPath, "w");


    if(NULL == ptr1 ){
        perror("couldn't open specified file");
        return 1;
    }
    
    else if(ptr2 == NULL){
        perror("couldn't write into specified destination ");
        return 1;
    }
    
    else{
        int ch;


        while((ch = fgetc(ptr1)) != EOF){
            // WRITE CONTENT INSIDE created file 
            fputc(ch, ptr2);   
        }

    }


    fclose(ptr1);
    fclose(ptr2);

    return 0;
}

short move_file(const char *sourcePath, char *destPath){
    copy_file(sourcePath, destPath);
    delete_file(sourcePath);


    return 0;
}
/*** Function Definition section stop ***/

