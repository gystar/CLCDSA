#include<stdio.h>
    int main(void){
      int a,b,c,d,left,right;
      scanf("%d %d %d %d",&a,&b,&c,&d);
      left=a+b;
      right=c+d;
      if(left>right){
        printf("Left\n");
      }else if(left==right){
        printf("Balanced\n");
      }else{
        printf("Right\n");
      }
      return 0;
    } 