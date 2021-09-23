#include <stdio.h>

int main()
{
  int N,M,C,i,j,ans=0;
  int B[20];
  scanf("%d %d %d",&N,&M,&C);
  for(i=0;i<M;i++)
    scanf("%d",&B[i]);
  
  for(i=0;i<N;i++){
    int ac=0;
    for(j=0;j<M;j++){
      int a;
      scanf("%d",&a);
      ac += a*B[j];
    }
    ac += C;
    if(ac>0)
      ans++;
  }
  printf("%d\n",ans);
} 