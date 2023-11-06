
/*
 **************************************************************************
 *  @file:        Left_Half_pyramid.c                                     *
 *  @author:      mr_h0n3y                                                *
 *  @brief:       Full Pyramid
 *  @rev  :       sumbtion 00                                             *
 **************************************************************************
 */

/******* include start *******/
#include <stdio.h>
/******* include stop *******/

int main() {

  for (int Row_Counter = 0; Row_Counter < 5; ++Row_Counter) {

    for (int Col_Counter = 5; Col_Counter > Row_Counter; --Col_Counter) {

      if (Col_Counter == Row_Counter + 1) {
        printf("*");
      }

      else {
        printf(" ");
      }
    }

    if (Row_Counter > 0) {
      for (int j = 0; j < Row_Counter; ++j) {
        printf(" *");
      }
    }

    printf("\n");
  }
}