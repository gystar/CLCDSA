#include<stdio.h>

int main(){
  int n,box[55556]={},box2[56],i,j,cnt;
  scanf("%d",&n);
  for(i=2;i<55555;i++)
    box[i]=1;
  for(i=2;i<55555;i++){
    if(box[i]){
      if(i%10==1)
        box2[cnt++]=i;
      for(j=i*i;j<55555;j+=i)
        box[j]=0;
    }
    if(cnt==n)
      break;
  }
  for(i=0;i<n;i++)
    printf("%d ",box2[i]);
  printf("\n");
} 