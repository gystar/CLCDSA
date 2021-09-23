#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int n,i;
  char s;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    scanf("%c",&s);
    if(s=='Y') {
      printf("Four");
      return 0;
    }
  }
  printf("Three");
  return 0;
} 