#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n",2*(b+a*(10+(b/10>0)*90+(b/100>0)*900)));
} 