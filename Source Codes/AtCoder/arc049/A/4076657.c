#include<stdio.h>

void run(void){
  char s[101];
  scanf("%s",s);
  int a[4];
  int i;
  for(i=0;i<4;i++) scanf("%d",a+i);
  int j=0;
  for(i=0;s[i]!='\0';i++){
    if(j<4 && i==a[j]){
      putchar('"');
      j++;
    }
    putchar(s[i]);
  }
  if(j<4) putchar('"');
  putchar('\n');
}

int main(void){
  run();
  return 0;
} 