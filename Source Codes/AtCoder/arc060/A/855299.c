#include<stdio.h>
long long d[60][60][2510]={1};
int main(){
  long long n,m,a,i,j,k;
  scanf("%lld %lld",&n,&m);
  for(i=0;i<n;i++){
    scanf("%lld",&a);
    for(j=0;j<=i;j++){
      for(k=0;k<2510;k++){//printf("%d ",d[i][j][k]);
	if(d[i][j][k]==0)continue;
	d[i+1][j][k]+=d[i][j][k];
	d[i+1][j+1][k+a]+=d[i][j][k];
      }//printf("\n");
    }//printf("\n\n");
  }
  for(i=j=1;i<=n;i++)j+=d[n][i][i*m];
  printf("%lld\n",j-1);
  return 0;
} 