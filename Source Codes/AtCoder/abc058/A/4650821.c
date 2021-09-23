#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(c-b==b-a){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
} 