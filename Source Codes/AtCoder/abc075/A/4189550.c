#include <stdio.h>

int handan(int a,int b,int c){
  int d=a;
  if(a==b) d=c;
  else if(c==a) d=b;
  return d;
}

int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("%d\n",handan(a,b,c));
  return 0;
} 