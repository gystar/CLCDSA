#include<stdio.h>
    int main(void){
      int n,a,b,min;
      scanf("%d %d %d",&n,&a,&b);
      min=a*n;
      if(b<min){
        min=b;
      }
      printf("%d\n",min);
      return 0;
     
    } 