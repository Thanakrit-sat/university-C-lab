#include <stdio.h>

int remove_vowel(char *str){
    char *head;
    head = str;

    for(;*str != '\0'; str++){
        if (*str == 'a' || *str == 'e'|| *str == 'i'|| *str == 'o'|| *str == 'u'
            || *str == 'A' ||*str == 'E' ||*str == 'I' ||*str == 'O' ||*str == 'U'){
                for(;*str != '\0'; str++){
                if(*str != '\0'){
                    *str = *(str+1);
                }else{
                    *str = '\0';
                }
            }
            str = head;
        }
    }
    str = head;
    if (*str == 'a' || *str == 'e'|| *str == 'i'|| *str == 'o'|| *str == 'u'
        || *str == 'A' ||*str == 'E' ||*str == 'I' ||*str == 'O' ||*str == 'U')
    {
        *str = '\0';
    }
}

int main()
{  
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n",str);

    return 0;
}