#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int gcd(int a, int b){
  return b?gcd(b,a%b):a;
}
int main(){
  int n,m,a;
  scanf("%d%d",&n,&m);
  while(--n){
    scanf("%d",&a);
    m=gcd(m,a);
  }
  printf("%d\n",m);
} 