#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n;
    string number;
    string delim = " ";
    string *token;
    int odd[50], even[50];

    cin >> n;
    cin >> number;

    string prisoner[n];
    
    //เอ๋อ
    stringstream ss(number);
    string word;
    int z = 0;
    while (ss >> word) {
        prisoner[z] = word;
    }
    //เอ๋อ

    int max = 0, min = 0;
    for(int i = 1; i < n; i++){
        if (prisoner[i] > prisoner[i-1]){
            stringstream max(prisoner[i]);
        } else if (prisoner[i] < prisoner[i-1]){
            stringstream min(prisoner[i]);
        }
    }

    for (int i = min; min < max;min++){
        int find = 0, x = 0, y = 0;
        for (int j = 0; j < sizeof(prisoner); j++){
            if(prisoner[j] == to_string(min)){
                find++;
                break;
            }
        }
        if (find > 0){
            if (min%2 == 0){
                even[x] = min;
                x++;
            }else{
                odd[y] = min;
                y++;
            }
        }
    }

    for(int i = 0; i < sizeof(even); i++){
        cout << even[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < sizeof(odd); i++){
        cout << odd[i] << " ";
    }
}