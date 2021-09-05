#include <stdio.h>

int main(){
    float a,b;
    char x;

    printf("Initial Value: ");
    scanf("%f", &a);
    
    printf("\nOperator: ");
    scanf("\n%c", &x);

    while (x == '+' || x == '-' || x == '*' || x == '/'){
        printf("Input Value: ");
        scanf("%f", &b);

        if (x == '+'){
            a += b;
        }else if (x == '-'){
            a -= b;
        }else if (x == '*'){
            a *= b;
        }else if (x == '/'){
            a /= b;
        }

        printf("Present Value is %.4f\n", a);
        printf("\nOperator: ");
        scanf("\n%c", &x);
    }

    printf("\nFinish Calculation. Final Value is %.4f", a);   
}