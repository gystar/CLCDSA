#include<stdio.h>
int main(){
  int n,a,b,c=0;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d",&a,&b);
    c+=a*b;
  }
  c*=1.05;
  printf("%d\n",c);
  return 0;
} 