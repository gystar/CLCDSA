#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",n+(n%2?1:-1));
} 