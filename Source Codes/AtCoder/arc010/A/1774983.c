#include<stdio.h>

int main(void){

  int a,b,n,m,i,x=-1;
  int c[1000];

  scanf("%d %d %d %d",&n,&m,&a,&b);


  for(i=0;i<m;i++)
    scanf("%d",&c[i]);


  for(i=0;i<m;i++){
    if(n<=a) n+=b;
    n-=c[i];
    if(n<0){ x=i+1; break; }
  }

  if(x==-1)
    printf("complete\n");

  else
    printf("%d\n",x);

  return 0;
} 