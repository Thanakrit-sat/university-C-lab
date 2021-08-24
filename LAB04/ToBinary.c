#include <stdio.h>

void binary(int x){
    if(x < 2){
        printf("%d",x);
    }
    else{
        binary(x/2);
        printf("%d",x%2);
    }
}

int main(){
    int x;

    scanf("%d",&x);
    
    binary(x);
}