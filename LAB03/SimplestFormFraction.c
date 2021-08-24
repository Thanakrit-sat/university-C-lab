#include <stdio.h>
#include <stdlib.h>

int main(){
    long num1,num2,check1,check2,check3,gcd;
    char num22[6],num11[6];
    
    gets(num11);
    gets(num22);

    num1 = atoi(num11);
    num2 = atoi(num22);

    check1 = abs(num1);
    check2 = abs(num2);

    while (check2 != 0){
        check3 = check2;
        check2 = check1%check2;
        check1 = check3;
    }

    gcd = check1;
    num1 = num1 / gcd;
    num2 = num2 / gcd;

    if (num2 == 1){
        printf("= %d", num1);
    }
    else{
        printf("= %d/%d", num1, num2);
    }
}