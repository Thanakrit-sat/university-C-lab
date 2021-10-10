#include <iostream>
using namespace std;

typedef struct Word_ {
    string word;
    int count;    
}Word;

int main(){
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while(true){
        cin >> input;
        if (input == "exit"){
            break;
        }
        for (i = 0; i < last_word; i++){
            if (input == data[i].word){
                data[i].count++;
                find++;
            }
        }if (find == 0){
            data[last_word].word = input;
            data[last_word].count = 1;
            last_word++;
        }
        find = 0;
    }

    cout << "Output:" << endl;
    for(int j = 0; j < last_word; j++){
        cout << data[j].word << " = " << data[j].count << endl;
    }
}