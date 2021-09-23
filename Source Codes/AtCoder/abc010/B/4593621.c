#include<stdio.h>

int main(void)
{
  int n;
  int a[10]={0};
  int i,j;
  int sum=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++){
    for(j=0;a[i]%2==0||a[i]%3==2;j++){
      	sum++;
	a[i]--;
    }}

  printf("%d\n",sum);

  return 0;
} 