#include <stdio.h>

int main() {
    int n, i;
    double pi = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int p=1, i=0; i < n; i++, p+=2){
        if (i%2 == 0){
            pi += 4.0 / p;
        }
        else{
            pi -= 4.0/p;
        }
    }

    printf("%.10lf", pi);
}