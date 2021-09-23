#include<stdio.h>
#define SIZE 1000
int main(){
  int n,a=1,i=0,j=0;
  int b[SIZE];
  scanf("%d", &n);
  while(n!=0){
    if(n>0){
      a=n%2;
      b[i]=a;
      n=-(n/2);
      i++;
    }
    else{
      a=(-n)%2;
      b[i]=a;
      if(a==1) n=-(n/2)+1;
      else n=-(n/2);
      i++;
    }
    j++;
  }
  if(j==0) printf("%d",0);
  for(i=j-1;i>=0;i--){
    printf("%d", b[i]);
  }
  printf("\n");
  return 0;
} 