#include<stdio.h>
#include<stdlib.h>

void run(void){
  int n;
  scanf("%d",&n);
  int *c=(int *)calloc(n,sizeof(int));
  int i,j;
  for(i=0;i<n;i++) scanf("%d",c+i);
  double ans=0;
  for(i=0;i<n;i++){
    int cnt=0;
    for(j=0;j<n;j++){
      if(j==i) continue;
      if(c[i]%c[j]==0) cnt++;
    }
    if(cnt==0){
      ans+=1;
    } else {
      ans+=(double)(1+cnt/2)/(cnt+1);
    }
  }
  printf("%.7f\n",ans);
}

int main(void){
  run();
  return 0;
} 