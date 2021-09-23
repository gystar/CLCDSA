#include <stdio.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("%d\n",a+b+c-max(a,max(b,c))-min(a,min(b,c)));

  return 0;
} 