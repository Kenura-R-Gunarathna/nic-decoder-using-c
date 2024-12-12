#include <stdio.h>
#include <stdbool.h>

#define MALE 1
#define FEMALE 0

#define JAN 31
#define FEB 29
#define MAR 31
#define APR 30
#define MAY 31
#define JUN 30
#define JUL 31
#define AUG 31
#define SEP 30
#define OCT 31
#define NOV 30
#define DEC 31

int main(){

    int nic;
    int year;
    bool gender = MALE; // 1:male, 0:female
    int dayOfyear = 0; 
    int month = 0;
    const int monthDays[12] = { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

    printf("Enter the NIC number (E.g.:- 202418201907): ");
    scanf("%4d%3d", &year, &dayOfyear);
    
    // printf("year:%d, dayOfyear:%d\n", year, dayOfyear); //test input capture

    if(dayOfyear > 500){
        gender = FEMALE;
        dayOfyear -= 500;
    }

    // printf("year:%d, dayOfyear:%d, gender:%s\n", year, dayOfyear, (gender)?"male":"female"); //test process 1 

    while (month < 12){

        if(dayOfyear <= monthDays[month]){
            break;
        }
        
        dayOfyear -= monthDays[month];
        month += 1; 
    }

    if(month > 11){
        printf("Invalid NIC!\n");
        return 0;
    }

    printf("year:%d, month:%d, day:%d, gender:%s\n", year, month+1, dayOfyear, (gender)?"male":"female"); //test process 2 
    return 0;
}
