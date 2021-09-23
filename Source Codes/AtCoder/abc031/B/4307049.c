#include<stdio.h>
int main(){
  int l,h,n,a,i;
  scanf("%d%d%d",&l,&h,&n);
  while(n--){
    i=0;
    scanf("%d",&a);
    if(a<l) i=l-a;
    else if(a>h) i--;
    printf("%d\n",i);
  }
} 