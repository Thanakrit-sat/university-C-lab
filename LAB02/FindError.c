#include <stdio.h>
#include <stdlib.h>

void main()
{
    char hour_str[4], min_str[4];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 4, stdin);

    printf("Enter minute: ");
    fgets(min_str, 4, stdin);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %02d:%02d" , hour, min);
}