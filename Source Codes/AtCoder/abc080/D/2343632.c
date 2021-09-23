#include<stdio.h>

int main(){
  int n,c,s[100000],t[100000],cc[100000],f[30][200002]={},i,j,sum=0,max=0;
  scanf("%d %d",&n,&c);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&s[i],&t[i],&cc[i]);
    for(j=2*s[i]-1;j<=2*t[i];j++) f[cc[i]-1][j]=1;
  }
  for(i=1;i<=200001;i++){
    sum=0;
    for(j=0;j<c;j++){
      sum+=f[j][i];
    }
    if(max<sum)max=sum;
  }
  printf("%d\n",max);
} 