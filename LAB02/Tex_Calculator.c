#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salary_str[20];
    float salary, total, vat, vattoten, vatten;

    fgets(salary_str,22,stdin);
    
    salary = atof(salary_str);

    if(salary <= 300000.00 && salary >= 0){
        vat = salary*5/100;
        printf("%.2f",vat);
    }
    else if (salary > 300000.00){
        vattoten = salary-300000.00;
        vatten = vattoten*10/100;
        vat = 15000;
        total = vat+vatten;
        printf("%.2f",total);
    }
    else if (salary < 0){
        printf("Error: Salary must be greater or equal to 0");
    }
}