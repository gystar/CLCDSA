#include<stdio.h>

int main(){
  int s1,e1,a1,b1;
  scanf("%d %d",&s1,&e1);
    a1=s1*e1;
  	b1=a1/10;
  int s2,e2,a2,b2;
  scanf("%d %d",&s2,&e2);
  	a2=s2*e2;
  	b2=a2/10;
  int s3,e3,a3,b3;
  scanf("%d %d",&s3,&e3);
  	a3=s3*e3;
  	b3=a3/10;
  int A,B;
  A=b1+b2+b3;
  printf("%d\n",A);
  
  return 0;
} 