#include<stdio.h>
 
int main()
{
  int A,B,C,seven=0,five=0;
  
  scanf("%d%d%d",&A,&B,&C);
  
  if(A==5){
    five++;
  }else if(A==7){
    seven++;
  }
  
  if(B==5){
    five++;
  }else if(B==7){
    seven++;
  }
  
  if(C==5){
    five++;
  }else if(C==7){
    seven++;
  }
  
  if(seven==1&&five==2){
    printf("YES");
  }else{
    printf("NO");
  }
  
  return 0;
} 