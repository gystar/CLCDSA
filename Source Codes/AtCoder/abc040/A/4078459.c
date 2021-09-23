#include <stdio.h>
int MIN(int a,int b){
    return a<b?a:b;
}
int main(){
  int n,x;
  scanf("%d%d",&n,&x);
  printf("%d",MIN(n-x,x-1));
  return 0;
} 