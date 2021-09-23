#include <stdio.h>
#include <math.h>
int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  char s[12];
  scanf("%s",s);
  if(s[a]!='-'){printf("No");return 0;}
  for(int i=0;i<a+b;i++){
    if(i!=a&&s[i]=='-') {printf("No");return 0;}
  }
  printf("Yes");
  return 0;
} 