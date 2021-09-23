#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int N, i;
  int ans = 0;

  scanf("%d", &N);

  int m[N];

  for(i = 0; i < N; i++){
    scanf("%d", &m[i]);
    if(m[i] < 80){
      ans += 80 - m[i];
    }
  }

  printf("%d\n", ans);
  
  return 0;
} 