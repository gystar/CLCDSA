#include <stdio.h>

int main(int argc, char *argv[]){
  int i, j, k;
  int n;

  scanf("%d", &n);

  int a[n];

  for(i=0; i<=n-1; i++){
    scanf("%d ", &a[i]);
  }

  k = 0;
  for(i=0; i<=n-1; i++){
    j = 0;
    while(n>0){
      if(a[i]%2 == 0){
        j++;
        a[i] = a[i]/2;
      }else{
        break;
      }
    }
    //printf("%d\n", j);
    k = k + j;
  }

  printf("%d\n", k);

  return 0;
} 