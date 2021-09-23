#include <stdio.h>

int main() {
  int a,b,i;
  scanf("%d%d",&a,&b);
  
  int result = 0;
  for(i = a; i <= b; i++){
    if(i/10000 == i%10 && i%10000/1000 == i%100/10){
      result++;
    }
  }
  printf("%d\n", result);
} 