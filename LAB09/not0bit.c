#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = 0;
    for (int i = n; i > 0; i /=2){
        if (i%2 == 1){
            numbits++;
        }
    }

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}