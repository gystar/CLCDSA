#include<stdio.h>

int main(void){
  int num[100001]={0};
  int N,i,j,k,tmp;
  int two=0,ans=0;
  
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&tmp);
    num[tmp]++;
  }

  for(i=0;i<100001;i++){
    if(num[i]==0) continue;
    ans++;
    num[i]=(num[i]%2)?1:2;
    if(num[i]==2) two++;
  }

  ans-=two%2;
  printf("%d\n",ans);
  return 0;
} 