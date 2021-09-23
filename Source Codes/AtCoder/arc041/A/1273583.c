#include<stdio.h>
int main(void){
  int x,y,z,k;
  scanf("%d %d",&x,&y);
  scanf("%d",&k);
  if(y<k){
    z=x+2*y-k;
  }
  else{
    z=x+k;
  }
  printf("%d\n",z);
      return 0;
} 