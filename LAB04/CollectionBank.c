#include <stdio.h>

int main(){
    float goal,today,sum = 0,total;
    int day = 1;

    printf("Enter your goal amount: ");
    scanf("%f",&goal);

    total = goal;

    while(sum<total){
        printf("Enter money collected today: ");
        scanf("%f",&today);

        sum += today;
        goal -= today;

        if(sum<total){
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",day,sum,goal);
        }
        else{
            if(day!=1){
                printf("Congratulations! You take %d days to reach your goal.",day);
            }
            else{
                printf("Congratulations! You take %d day to reach your goal.",day);
            }
        }
        day++;
    }
}