#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int L, R, i, j;
  int ans = 0;

  scanf("%d%d", &L, &R);

  int l[L], r[R];

  for(i = 0; i < L; i++){
    scanf("%d", &l[i]);
  }
  for(i = 0; i < R; i++){
    scanf("%d", &r[i]);
  }

  for(i = 0; i < L; i++){
    for(j = 0; j < R; j++){
      if(l[i] == r[j]){
	ans++;
	r[j] = 0;
	break;
      }
    }
  }

  printf("%d\n", ans);
  
  return 0;
} 