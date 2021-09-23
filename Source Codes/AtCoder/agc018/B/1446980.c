#include<stdio.h>
int main(){
  int n,m,f[310],d[310][310],r[310],i,j,mi,min=310;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++){
    for(j=r[i]=0;j<m;j++)scanf("%d",&d[i][j]);
  }
  for(i=0;i<m;i++){
    int c[310]={};
    for(j=0;j<n;j++){
      while(f[d[j][r[j]]])r[j]++;
      c[d[j][r[j]]]++;
    }
    for(j=mi=1;j<305;j++){
      if(c[mi]<c[j])mi=j;
    }
    if(min>c[mi])min=c[mi];
    f[mi]=1;
  }
  printf("%d\n",min);
  return 0;
} 