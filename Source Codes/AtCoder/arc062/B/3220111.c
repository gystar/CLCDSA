#include<stdio.h>
#include<stdlib.h>

void run(void){
  char *s=(char *)malloc(sizeof(char)*(100000+1));
  scanf("%s",s);
  int p=0;
  int cnt=0;
  int i;
  for(i=0;s[i]!='\0';i++){
    if(p>0){
      if(s[i]=='g') cnt++;
      p--;
    } else {
      if(s[i]=='p') cnt--;
      p++;
    }
  }
  printf("%d\n",cnt);
}

int main(void){
  run();
  return 0;
} 