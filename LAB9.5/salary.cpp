#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char name[20], buffer[50];
    double salary, sale; 
    double total = 0;
    cin >> name;
    cin >> salary;
    for(int i = 0; i < 12; i++){
        cin >> sale;
        total += (sale * 0.15) + salary;
    }
    sprintf(buffer, "%.2f",total);
    cout << name << " " << buffer;
}