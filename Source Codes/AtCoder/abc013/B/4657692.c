#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int min(int a,int b){
  if(a>b) return b;
  return a;
}
int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",min((10+a-b)%10,(10+b-a)%10));
  return 0;
} 