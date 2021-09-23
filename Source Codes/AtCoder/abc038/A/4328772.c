#include<stdio.h>
int main (){
  char s[51];
  scanf("%s", s);
  if(s[strlen(s)-1] == 'T'){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
return 0;
} 