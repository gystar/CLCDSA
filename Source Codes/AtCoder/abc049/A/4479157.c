#include <stdio.h>
#include <string.h>
int main(){
  char c[2];

  scanf("%c", c);

  if(c[0] == 'a' || c[0] == 'i' || c[0] == 'u' || c[0] == 'e' || c[0] == 'o'){
    printf("vowel\n");
  }else{
    printf("consonant\n");
  }

} 