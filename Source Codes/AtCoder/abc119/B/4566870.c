#include<stdio.h>
#include<string.h>

int main(){
  int n,i;
  float money,total=0;
  char type[4];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%f %s",&money,type);
    if(strcmp(type,"BTC")==0) money*=380000.0;
  total+=money;
  }
    printf("%f\n",total);
    return 0;
  } 