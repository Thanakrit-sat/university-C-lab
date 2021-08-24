#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[3], b[3], c[3];
    int A,B,C;
    
    printf("Enter length of side A: ");
    fgets(a,3,stdin);
    printf("Enter length of side B: ");
    fgets(b,3,stdin);
    printf("Enter length of side C: ");
    fgets(c,3,stdin);

    A = atoi(a);
    B = atoi(b);
    C = atoi(c);
    
    if((A <= 0 && B<=0 && C <= 0) || A+B <= C || B+C <= A || A+C <= B ){
        printf("Triangle type is invalid.");
    }
    else if(A == B && B == C && C == A ){
        printf("Triangle type is equilateral.");
    }
    else if(A != B && B != C && C != A){
        printf("Triangle type is scalene.");
    }
    else if(A == B || B == C || C == A){
        printf("Triangle type is isosceles.");
    }
}