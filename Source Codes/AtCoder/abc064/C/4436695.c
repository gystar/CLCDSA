#include<stdio.h>
int main(){
  int n,a[100],c[9]={},ans=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    a[i]=a[i]>=3200?3200:a[i];
    c[a[i]/400]++;
  }
  for(i=0;i<8;i++){
    ans+=c[i]>0;
  }
  if(ans==0){
    ans++;
    c[8]--;
  }
  printf("%d %d",ans,ans+c[8]);
} 