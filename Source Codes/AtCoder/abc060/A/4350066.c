#include<string.h>
#include<stdio.h>
int main(void){
  char a[10],b[10],c[10];
  scanf("%s %s %s",a,b,c);
  if((a[strlen(a)-1]==b[0]) && (b[strlen(b)-1]==c[0])) printf("YES\n");
  else printf("NO\n");
  return 0;
} 