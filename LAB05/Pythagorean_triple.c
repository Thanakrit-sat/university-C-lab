#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int n,a = 3,b = 4,c = 5;
    scanf("%lld",&n);
    while (n>=a && n >= a+b+c )
    {
        long long int  b = 4;
        while (n>=b && n >= a+b+c)
        {
            long long int c = n - b - a;
            //printf("(a = %lld, b = %lld, c = %lld)\n",a,b,c);
            if(n == a+b+c && (a*a)+(b*b) == (c*c) && a < b && b < c && a < c)
                {
                printf("(%lld, %lld, %lld)",a,b,c);
                exit(0);
                }
            
            b += 1;
        }
        a += 1;
    }
    printf("No triple found.");
}