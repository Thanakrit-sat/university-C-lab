#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, min;
    char time[1];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hour, &min, &time[0]);
    if (time[0] == 'A' || time[0] == 'a'){
        if (hour == 12){
            hour = 0;
        }
    }else if (time[0] == 'P' || time[0] == 'p'){
        if (hour < 12){
            hour += 12;
        }
    }
    printf("Equivalent 24-hour time: %02d:%02d", hour, min);
}