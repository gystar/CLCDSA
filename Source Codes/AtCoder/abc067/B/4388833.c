#include<stdio.h>

int main(void)
{
  int n, k, ans=0;
  int i, j, tmp;
  scanf("%d%d", &n, &k);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
  }

  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++){
      if(a[j+1] < a[j]){
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }

  for(i=0;i<k;i++)
  {
    ans = ans + a[n-1];
    n--; 
  }
  printf("%d", ans);

  return 0;
} 