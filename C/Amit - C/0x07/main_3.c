/* Include Section Start */
#include <stdio.h>
#include <string.h>
/* Include Section Stop */

typedef struct{
    int hours;
    int minutes;
}timeObj;

void period_difference(timeObj t1, timeObj t2);

int main(){
    timeObj t1, t2;
    t1.hours = 12;
    t1.minutes = 0;

    t2.hours = 2;
    t2.minutes = 0;

    period_difference(t1, t2);

    return 0;
}

void period_difference(timeObj t1, timeObj t2){
    timeObj result;

    

    result.hours = (t1.hours*3600 - t2.hours*3600)/3600;
    result.minutes = (t1.minutes*60 - t2.minutes*60)/60;


    printf("Time Difference: %d hours, %d minutes\n", t1.hours-t2.hours, t2.minutes-t2.minutes);

}




