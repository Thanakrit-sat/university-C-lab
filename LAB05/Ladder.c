#include <stdio.h>

int main(){
    int stair,head,body,count = 1,move;

    printf("Input number of stairs: ");
    scanf("%d", &stair);

    body = stair;
    head = stair-1;
    printf("---- round %d ----\n", count);

    for (int i = 1; i <= stair; i++){
        printf("|");
        for (int j = 1; j <= 3; j++ ){
            if (i == body && j == 2){
                printf("^");
            }
            else if (i == head && j == 2){
                printf("O");
            }
            else{
                printf("-");
            }
        }
        printf("|\n");
    }

    count++;
    printf("Input step command: ");
    scanf("%d", &move);

    while (move != 0){
        head -= move;
        body -= move;

        if (head < 1){
            body = 2;
            head = 1;
        }else if (body > stair){
            body = stair;
            head = stair-1;
        }
        printf("---- round %d ----\n", count);

        for (int i = 1; i <= stair; i++){
            printf("|");
            for (int j = 1; j <= 3; j++ ){
                if (i == body && j == 2){
                    printf("^");
                }else if (i == head && j == 2){
                    printf("O");
                }else{
                    printf("-");
                }
            }
            printf("|\n");
        }
        count++;
        
        printf("Input step command: ");
        scanf("%d", &move);
    }
}