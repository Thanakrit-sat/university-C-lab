#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char *s){
    char *str;
    int i;
    str = malloc(100*sizeof(char));
    for(; *(s+i) != '\0'; i++){
        *(str+i) = toupper(*(s+i));
    }
    *(str+i) = '\0';
    return str;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}