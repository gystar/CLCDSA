#include<stdio.h>

int main(void){
  int n,m,x,s,i;
  int cnta=0,cntb=0;
  scanf("%d %d %d",&n,&m,&x);
  
  for(i=0;i<m;i++){
    scanf("%d",&s);
    if(x>s) cnta++;
    if(x<s) cntb++;
  }
  
  if(cnta>=cntb){
    printf("%d\n",cntb);
  }else{
    printf("%d\n",cnta);
  }
  
  return 0;
} 