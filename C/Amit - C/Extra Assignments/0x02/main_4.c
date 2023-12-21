/* Include Section Start */
#include <stdio.h>
/* Include Section Stop */


/*
    Job: write a program that 
*/


int main(){
    float waterTemperatures = 0.0;


    printf("Enter water temperature: ");
    scanf("%f", &waterTemperatures);


    if(waterTemperatures > 100){
        printf("\n[#] Invalid Input.");
    }else{

        if(waterTemperatures >= 0 && waterTemperatures <= 30){
            printf("\n[#] Required Heating time = 7 mins.");
        }

        else if(waterTemperatures >= 30 && waterTemperatures <= 60){
            printf("\n[#] Required Heating time = 5 mins.");
        }

        else if(waterTemperatures >= 60 && waterTemperatures <= 90){
            printf("\n[#] Required Heating time = 3 mins.");
        }

        else if(waterTemperatures > 90){
            printf("\n[#] Required Heating time = 1 mins.");
        }



    }
}

