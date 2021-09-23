#include <stdio.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  printf("%d\n",c/min(a,b));
   

  return 0;
} 