#include <stdio.h>
int main(){
  int n, a, b;
  scanf("%d%d%d",&n,&a,&b);
  if((b-a)%2 == 1){
    puts("Borys");
  }else{
    puts("Alice");
  }
  return 0;
} 