#include <stdio.h>

int charcount(char *s){
    int count = 0;
    for(;*s != '\0'; s++){
        count++;
    }
    return count;
}

void charweave(char *s,char *result){
    int count=0, i=0, j=0;
    count = charcount(s);
    for(; i < (count*2); i+=2, j++){
        result[i] = s[j];
        result[i+1] = s[count-j-1];
    }
    result[i] = '\0';
}

int main(){
    char str[100],result[200];

    printf("String: ");
    gets(str);   /* read a line of characters from the input to "str" variable */
    charweave(str,result);
    printf("Output: %s\n",result);
    return 0;
}