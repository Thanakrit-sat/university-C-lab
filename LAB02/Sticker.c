#include <stdio.h>
#include <stdlib.h>

int main()
{
    int discount,lstc,stc;
    float total_price,price;
    char stcc[5],pricee[10];
    
    fgets(stcc,5,stdin);
    fgets(pricee,10,stdin);

    stc = atoi(stcc);
    price = atof(pricee);

    if (stc==0){
        lstc = 0;
        discount = 0;
    }
    else if (stc==1){
        lstc = 0;
        discount = 10;
    }
    else if (stc==2){
        lstc = 0;
        discount = 15;
    }
    else if (stc<=5){
        lstc = stc-3;
        discount = 20;
    }
    else if (stc<=8){
        lstc = stc-6;
        discount = 30;
    }
    else if (stc>=9){
        lstc = stc-9;
        discount = 40;
    }
    
    total_price = price*(100-discount)/100;

    printf("You get %d percents discount.\n",discount);
    printf("Total amount due is %.2f Baht.\n",total_price);
    printf("And you have %d stickers left.\n",lstc);
}