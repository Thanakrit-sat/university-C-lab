#include <stdio.h>

int checkchain(char* str1, char* str2){
    int count = 0;
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0';i++){
        if (str1[i] != str2[i]){
            count++;
        }
    }
    if (count > 2){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int word,line,ch,test = 1;
    scanf("%d",&word);
    scanf("%d",&line);
    char str1[word+1], str2[word+1], result[word+1];
    scanf("%s", str1);
    for (int i=0 ; i< line-1;i++){
        scanf("%s", str2);
        ch = checkchain(str1,str2);
        if (ch){
            for (int i = 0; i < word;i++){
                result[i] = str2[i];
            }
            result[word] ='\0';
        }else{
            for (int i = 0; i< word; i++){
                result[i] = str1[i];
                test++;
            }
            result[word] = '\0';
        }
        for (int i = 0; i < word && test == 1 ; i++){
            str1[i] = str2[i];
        }
        str1[word] = '\0';
    }
    printf("%s", result);
}