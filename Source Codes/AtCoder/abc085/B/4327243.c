#include <stdio.h>
int main(void){
  int n,d[100],i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&d[i]);
  }
  int count=1,max,index,tmp;
  for(i=0;i<n-1;i++){
    max=0;
    index=i;
    for(j=i;j<n;j++){
      if(max<d[j]){
        max=d[j];
        index=j;
      }
    }
    tmp=d[i];
    d[i]=d[index];
    d[index]=tmp;
  }
  for(i=1;i<n;i++){
    if(d[i]<d[i-1]) count++;
  }
  printf("%d",count);
  return 0;
} 