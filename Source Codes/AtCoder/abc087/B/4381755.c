#include <stdio.h>
#include <math.h>
int main(void){
  int x,a,b,c;
  scanf("%d%d%d%d",&a,&b,&c,&x);
  int i,j,k,count;
  for(i=0;i<=a;i++){
    for(j=0;j<=b;j++){
      for(k=0;k<=c;k++){
        if(500*i+100*j+50*k==x) count++;
      }
    }
  }
  printf("%d",count);
  return 0;
} 