#include<stdio.h>
int main(void){
  char c;
  scanf("%c",&c);
  if('a'==c || 'i'==c || 'u'==c || 'e'==c || 'o'==c) printf("vowel\n");
  else printf("consonant\n");
  return 0;
} 