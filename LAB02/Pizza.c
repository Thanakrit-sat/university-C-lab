#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double fixedcost = 5;
    double basecost = 2;
    double extracost = 0;
    double r,area,total,price;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    char size = getchar();

    if (size=='1'){
        r = 5;
    }
    else if (size=='2'){
        r = 8;
    }
    else if (size=='3'){
        r = 10;
    }

    area = M_PI * pow(r,2);

    getchar();
    printf("Extra pepperoni? (1=yes, 0=no): ");
    if (getchar()=='1'){
        extracost += 0.5;
    }

    getchar();
    printf("Extra cheese? (1=yes, 0=no): ");
    if (getchar()=='1'){
        extracost += 0.25;
    }

    getchar();
    printf("Extra mushroom? (1=yes, 0=no): ");
    if (getchar()=='1'){
        extracost += 0.3;
    }
    getchar();

    total = fixedcost + (basecost*area) + (extracost*area);
    price = total*1.5;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n",price);
    printf("Thank you.");
}