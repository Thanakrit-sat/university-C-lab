#include <iostream>
using namespace std;

typedef struct {
    char word[20];
    int count;    
}Word;

int main(){
    char input[21];
    int i, last_word = 0, find = 0;
    Word data[20];
    scanf("%20s", input);

    while(input != "exit"){                
        int count = 0;
        for (int i = 0; i < last_word;i++){
            if (input == data[i].word){
                data[i].count++;
                count++;
            }
        }if (count == 0){
            data[last_word].word == input;
            data[last_word].count = 1;
            last_word++;
        }
        scanf("%20s", input);    
    }

    printf("Output:\n");
    for(i = 0; i < last_word; i++){
        printf("%s = %d\n", data[i].word, data[i].count);
    }
}