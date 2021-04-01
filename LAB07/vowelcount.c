#include <stdio.h>

int main(){
    char string[100];
   int count=0;

   printf("String (without a space): ");
   scanf("%s",&string);

   for (int i =0; string[i] != '\0'; i++){
      if (string[i] == 'a' || string[i] == 'e'|| string[i] == 'i'|| string[i] == 'o'|| string[i] == 'u'
         || string[i] == 'A' ||string[i] == 'E' ||string[i] == 'I' ||string[i] == 'O' ||string[i] == 'U'){
         printf("%c ",string[i]);
         count++;
      }
   }
   
   if(count > 1){
      printf("\nThis string contains %d vowels.", count);
   }else{
      printf("\nThis string contains %d vowel.", count);
   }
}