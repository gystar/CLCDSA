#include<stdio.h>
int main (){
int a,b,k,i,j,c=0;
  scanf ("%d",&k);
  for (i=0;i*4<101;i++){
  for (j=0;(j*7)+(i*4)<101;j++){
  if((j*7)+(i*4)==k){
  c=1;
    break;
  }
  }
  }
  if (k==0){
  printf ("No");
  }
  else if (c==1){
  printf ("Yes");
  }
  else {
  printf ("No");
  }
return 0;
} 