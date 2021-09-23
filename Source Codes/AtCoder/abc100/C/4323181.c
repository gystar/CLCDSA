#include<stdio.h>
int div2(int n){
  if(n%2) return 0;
  else return div2(n/2)+1;
}
int main(){
  int n,i,sum=0,a;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    sum+=div2(a);
  }
  printf("%d",sum);
} 