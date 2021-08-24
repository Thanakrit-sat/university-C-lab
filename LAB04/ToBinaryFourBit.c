#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int one, two, tree, four, decimal;
    char decimal_str[5];

    fgets(decimal_str, 5,stdin);
    decimal = atoi(decimal_str);

    four = decimal % 2;
    tree = (decimal/2) % 2;
    two = (decimal/4) % 2;
    one = (decimal/8) % 2;

    printf("Binary number of %d is %d%d%d%d.", decimal, one, two, tree, four);
}