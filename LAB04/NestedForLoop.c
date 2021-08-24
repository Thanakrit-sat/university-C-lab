#include <stdio.h>

int main(){
    int x, i;

    scanf("%d",&x);

    for(i = 1; i <= x; i++){
        for(int n = 1; n <= i; n++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = x-1; i >= 1; i--){
        for(int n = 1; n <= i; n++){
            printf("*");
        }
        if(i != 1){
            printf("\n");
        }
    }
}