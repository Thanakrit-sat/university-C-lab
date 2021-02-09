#include <stdio.h>

//ให้เขียนโปรแกรมทอนเงินจากนธนบัตรชนิดราคาต่ำ ไปหาราคาสูงที่สุด โดย amount เก็บจำนวนเงินที่ต้องทอน
int main()
{
    int amount;
    printf("Enter amount: ");
    scanf("%d",&amount);
    int a = amount/50;
    int b = (amount-(a*50))/20;
    int c = (amount-(a*50)-(b*20))/5;
    int d = amount%5;
    printf("1: %d\n5: %d\n20: %d\n50: %d",d, c, b, a);
}