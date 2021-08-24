#include <stdio.h>
#include <stdlib.h>

int is_prime(int x){
    int count = 0;
    for (int n = 1; n <= x; n++){
        if (x % n == 0){
            count ++;
        }
    }
    if (count == 2)
        return 1;
    return 0;
}


int main(){
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 0; i <= n; i++) {
        if (is_prime(i)){
            printf("%d is a prime number.\n", i);
        }
    }
}