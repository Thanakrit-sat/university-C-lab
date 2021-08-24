#include <stdio.h>

int main(){
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);
    
    for (int i = 1; i <= y; i++){
        for (int n = 1; n <= x+y; n++){
            if (i==1 && (n >=1 && n<=x)){
                printf("*");
            }
            else if (i == y && (n >= y && n<= x+y-1)){
                printf("*");
            }
            else if (n == i || n == x+i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        if (i != y)
        printf("\n");
    }
}