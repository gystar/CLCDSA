#include<stdio.h>

int main(){
  int i, n, a[10], count = 0;
  scanf("%d", &n);
  
  for (i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  
  for (i = 0; i < n; i++){
    while(a[i] % 3 == 2 || a[i] % 2 == 0){
      count++;
      a[i]--;
    }
  }
  
  printf("%d\n", count);
  
  return 0;
} 