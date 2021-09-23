#include<stdio.h>

int main(void){
  int i,n=0,c=0;

  char a[1000];

  scanf("%s",a);

  for(i=0;a[i]!=0;i++) n++;
  n--;

  for(i=0;i<=n/2;i++){
    if(a[i]!=a[n-i]){ c=1; break; }
  }

  if(c==0)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
} 