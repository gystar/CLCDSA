#include <stdio.h>
int main(void)
{
  int n;
  int c[100];
  int d[100]={0};
  int i,j;
  double e=0.0;
  scanf("%d",&n);
  for(i=0;i<n;++i){
    scanf("%d",c+i);
  }
  for(i=0;i<n;++i){
    for(j=0;j<n;++j){
      if(c[i]%c[j]==0) ++d[i];
    }
  }
  for(i=0;i<n;++i){
    double x = (double)((d[i]+1)/2);
    x/=d[i];
    e+=x;
  }
  printf("%.8f\n",e);
  return 0;
} 