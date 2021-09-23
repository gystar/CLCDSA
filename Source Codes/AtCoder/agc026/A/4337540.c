#include<stdio.h>
int main(){
  int n,a[111],i,ans=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<n;i++){
    if(a[i]==a[i-1]){
      ans++;
      i++;
    }
  }
  printf("%d",ans);
} 