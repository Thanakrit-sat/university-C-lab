#include <stdio.h>
#include <stdlib.h>

int main()
{
    char AA;

    AA = getc(stdin);
    int B = AA;
    
    if(B >= 65 && B <= 90){
        printf("Output: upper case");
    }
    else if(B >= 97 && B <= 122){
        printf("Output: lower case");
    }
    else if(B >= 48 && B <= 57){
        printf("Output: digit");
    }
    else{
        printf("Output: others");
    }

}