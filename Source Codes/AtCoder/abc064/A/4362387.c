# include <stdio.h>

int main(){
  int a[3];
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  if((10*a[1]+a[2])%4==0) puts("YES");
  else puts("NO");
  return 0;
} 