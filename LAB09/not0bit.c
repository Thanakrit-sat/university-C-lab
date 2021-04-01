#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = x%2 + (x>>1)%2 + (x>>2)%2 + (x>>3)%2 + (x>>4)%2 + (x>>5)%2 + (x>>6)%2 + (x>>7)%2;

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}