#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int a,b,i;
  scanf("%d %d",&a,&b);
  int count=0;
  for(i=a;i<=b;i++){
    char s[10];
    sprintf(s,"%d",i);
    if(s[0]==s[4]&&s[1]==s[3]) count++;
  }
  printf("%d",count);
  return 0;
} 