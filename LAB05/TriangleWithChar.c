#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n != 1){
        for (int count = 1; count <= n; count++){
            for (int count2 = 1; count2 <= count; count2++){
                if (count2 % 2 == 0) printf("x");
                else printf("-");
            }
        printf("\n");
        }
        for (int count = n-1; count > 0; count--){
            for (int count2 = 1; count2 <= count; count2++){
                if (count2 % 2 == 0) printf("x");
                else printf("-");
            }
            if (count != 1) printf("\n");
        }
    }
    else printf("-");
}