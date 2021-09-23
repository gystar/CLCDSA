#include<stdio.h>

int main(){
  long n, count[1000002] = {0}, i, a, b, max = 0;
  
  scanf("%ld", &n);
  
  for (i = 0; i < n; i++){
    scanf("%ld %ld", &a, &b);
    count[a]++;
    count[b + 1]--;
  }
  for (i = 1; i < 1000001; i++){
    count[i] += count[i - 1];
  }
  for (i = 0; i < 1000001; i++){
    if(max < count[i]){
      max  =count[i];
    }
  }
  
  printf("%ld\n", max);
  
  return 0;
} 