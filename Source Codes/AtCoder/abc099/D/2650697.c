#include<stdio.h>

int main(){
  long n,c,d[31][31],cc[500][500],i,j,p[31][3]={},k,min;
  scanf("%ld %ld",&n,&c);
  for(i=0;i<c;i++)
    for(j=0;j<c;j++)
      scanf("%ld",&d[i+1][j+1]);
  
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%ld",&cc[i][j]);

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      for(k=1;k<=c;k++)
        p[k][(i+j)%3]+=d[cc[i][j]][k];
  min=500*500*1000+1;
  for(i=1;i<=c;i++){
    for(j=1;j<=c;j++){
      if(i!=j){
        for(k=1;k<=c;k++){
          if(i!=k&&j!=k&&min>p[i][0]+p[j][1]+p[k][2]){
            min=p[i][0]+p[j][1]+p[k][2];
          }
        }
      }
    }
  }
  printf("%ld\n",min);
} 