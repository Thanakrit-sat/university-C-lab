#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    char name[20], buffer[50];
    float salary, sale; 
    float total = 0;
    cin >> name;
    cin >> salary;
    for(int i = 0; i < 12; i++){
        cin >> sale;
        total += (sale * 0.15) + salary;
    }
    sprintf(buffer, "%.2f",total);
    cout << name << " " << atof(buffer);
}