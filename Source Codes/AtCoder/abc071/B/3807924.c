#include<stdio.h>

int main(){
  int len = 0, i, p;
  char s[100000], list[26] = {0};
  scanf("%s", s);
  
  while(s[len]){
    p = s[len] - 'a';
    list[p] = 1;
    len++;
  }
 for(i = 0; i < 26; i++){
   if(list[i] == 0){
     printf("%c", 'a' + i);
     break;
   }
 }
  if(i == 26){
    printf("None\n");
  }
} 