#include<stdio.h>

int main(void){
  int l,h,n,i;
  scanf("%d %d",&l,&h);
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(l>=a[i]) printf("%d\n",l-a[i]);
    else if(l<a[i] && a[i]<=h) printf("0\n");
    else printf("-1\n");
  }
  return 0;
} 