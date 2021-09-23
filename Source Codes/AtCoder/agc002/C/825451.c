#include<stdio.h>

int main(void){
  int N,L,a[100001],sum[100001];
  int i,j,k,knum;
  scanf("%d%d",&N,&L);
  for(i=1;i<=N;i++) scanf("%d",&a[i]);
  for(i=k=1;i<N;i++){
    sum[i]=a[i]+a[i+1];
    if(k<sum[i]){
      k=sum[i];
      knum=i;
    }
  }

  if(k<L){
    puts("Impossible");
    return 0;
  }

  puts("Possible");
  for(i=1;i<knum;i++) printf("%d\n",i);
  for(i=N-1;i>knum;i--) printf("%d\n",i);
  printf("%d\n",knum);
  return 0;
} 