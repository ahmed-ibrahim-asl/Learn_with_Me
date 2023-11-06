

/*
 **************************************************************************
 *  @file:        Right_Half_pyramid.c                                    *
 *  @author:      mr_h0n3y                                                *
 *  @brief:       construcing Right Half Pyramid                          *
 **************************************************************************
 */

/******* include start *******/
#include <stdio.h>
/******* include stop *******/

/******* Macros start *******/
#define HEIGH 5
#define fillingSymbol_1 "*"
/******* Macros stop *******/

int main() {

  for (unsigned RowCounter = 0; RowCounter < HEIGH; ++RowCounter) {

    for (unsigned ColumnCounter = 0; ColumnCounter < RowCounter;
         ++ColumnCounter) {
      printf(fillingSymbol_1);
    }

    printf("\n");
  }
}