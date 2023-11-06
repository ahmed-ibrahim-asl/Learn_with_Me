
/*
 **************************************************************************
 *  @file:        Left_Half_pyramid.c                                    *
 *  @author:      mr_h0n3y                                                *
 *  @brief:       construcing Left Half Pyramid                          *
 **************************************************************************
 */

/******* include start *******/
#include <stdio.h>
/******* include stop *******/

int main() {

  for (int RowCounter = 0; RowCounter < 5; ++RowCounter) {

    for (int ColCounter1 = 5; ColCounter1 > RowCounter; --ColCounter1) {
      printf(" ");
    }

    for (int ColCounter2 = 0; ColCounter2 < RowCounter; ++ColCounter2) {
      printf("1");
    }

    printf("\n");
  }
}