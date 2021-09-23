#include <stdio.h>
int main(){
  char s[4];
  int f=700;
  scanf("%s",s);
  for(int i=0;i<3;i++){
    if(s[i]=='o'){
      f+=100;
    }
  }
  printf("%d",f);
  return 0;
} 