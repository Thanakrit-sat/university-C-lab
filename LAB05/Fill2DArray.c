#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows or columns: ");
    scanf("%d",&n);

    int a[n][n];
    // Assign value to array a
    int c = 1;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            a[i][j] = j + c; 
        }
        c++;
    }

    // Print all values in array a
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%2d ", a[i][j]);
        printf("\n");
    }
}