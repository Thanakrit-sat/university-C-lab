#include <stdio.h>
#define ARRAY_SIZE 99


int main() {
    int i, j;
    int A[ARRAY_SIZE] = {0};

    for (i = 2; i < ARRAY_SIZE; i++)
        A[i] = 1;

    for (i = 2; i < ARRAY_SIZE; i++) {
        if (A[i] != 0){
            A[i] = i;
            for (j = i+1; j < ARRAY_SIZE; j++){
                if (A[j] == 1)
                    A[j] = j;
                if (A[j] % A[i] == 0)
                    A[j] = 0;
            }
        }
    }

    for (i = 2; i < ARRAY_SIZE; i++)
        
    if (A[i] != 0)
        printf("%d ",A[i]);

    printf("\n");
}