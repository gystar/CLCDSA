#include <stdio.h>

int main(void)
{
  
  int n,m;
  
  scanf("%d%d",&n,&m);
  
  for(int i=1;n>=i;i++){
    if(i!=m){
      printf("%d",i);
      break;
    }
  }
  
  return 0;
  
} 