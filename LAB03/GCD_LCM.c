#include <stdio.h>
#include <stdlib.h>

int main(){
    char X_str[12] , Y_str[12];
    long long X , Y, X_tmp, Y_tmp, tmp, GCD, LCM;

    fgets(X_str , 12 ,stdin);
    fgets(Y_str , 12 ,stdin);

    X = atoll(X_str);
    Y = atoll(Y_str);

    X_tmp = X;
    Y_tmp = Y;

    while(X != 0){
        tmp = X;
        X = Y%tmp;
        Y = tmp;
    }

    GCD = Y;
    LCM = (X_tmp*Y_tmp) / GCD;

    printf("GCD: %lld\n", GCD);
    printf("LCM: %lld", LCM);
}