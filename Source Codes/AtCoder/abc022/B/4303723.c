#include<stdio.h>
int main(){
  int n,a[100000],b[100000]={},i,ans=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(b[a[i]]) ans++;
    b[a[i]]++;
  }
  printf("%d\n",ans);
} 