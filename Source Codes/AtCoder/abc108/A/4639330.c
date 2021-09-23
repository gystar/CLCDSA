#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void){
  int i,j,n,odd=0,even=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(i%2==0) even++;
    else odd++;
  }
  printf("%d",even*odd);
  return 0;
} 