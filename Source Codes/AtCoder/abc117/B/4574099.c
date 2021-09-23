#include<stdio.h>

int main(){
  int n,i,max=1,l[11],lt=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&l[i]);
    lt+=l[i];
    if(max<l[i]) max=l[i];
  }
  if(max<lt-max) printf("Yes\n");
  else printf("No\n");
  return 0;
} 