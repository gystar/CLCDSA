#include<stdio.h>

int main(void){
  int a,b,i;
  char s[11];
  char ch;
  scanf("%d %d",&a,&b);
  getchar();
  for(i=0;i<a+b+1;i++){
    s[i] = getchar();
    //printf("%c ",s[i]);
    if((i!=a) && !('0'<=s[i] && s[i]<='9')){
      printf("No\n");
      return 0;
    }
    if((i==a) && !(s[i]=='-')){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
} 