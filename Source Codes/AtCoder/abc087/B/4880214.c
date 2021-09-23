#include<stdio.h>

int main(void){
  int a,b,c,x,y,i,j,k,count;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&x);
count =0;

for(i=0;i<=a;i++){
  for(j=0;j<=b;j++){
    for(k = 0;k<=c;k++){
      y = i*500 + j*100 + k*50;
      if(y == x)count++;
    }
  }
}
  printf("%d",count);
  return 0;

} 