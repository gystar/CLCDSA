#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 
int main(void){

  int n, i;
  int ans = 0;

  scanf("%d", &n);

  int a[n];

  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for(i = 0; i < n; i++){
    while(a[i] > 0){
      if((a[i] % 2 == 1) && (a[i] % 3 != 2)){
	break;
      }else{
	a[i]--;
	ans++;
      }
    }
  }

  printf("%d\n", ans);
  
  return 0;
} 