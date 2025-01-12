#include<stdio.h>
#include<stdlib.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

void run(void){
  int n;
  scanf("%d",&n);
  int *p=(int *)malloc(sizeof(int)*(n+1));
  int i;
  for(i=0;i<n;i++){
    int a;
    scanf("%d",&a);
    p[a]=i;
  }
  int ans=n-1;
  i=1;
  while(i<=n){
    int j=i+1;
    while(j<=n && p[j]>p[j-1]) j++;
    ans=MIN(ans,n-(j-i));
    i=j;
  }
  printf("%d\n",ans);
  return;
}

int main(void){
  run();
  return 0;
} 