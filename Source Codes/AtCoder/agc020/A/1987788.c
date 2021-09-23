#include <stdio.h>
#include <string.h>
 
int main(){
  int n,a,b;
  scanf("%d %d %d",&n,&a,&b);
  if((b-a)%2==0){
    printf("Alice\n");
  }
  else{
    printf("Borys\n");
  }
  return 0;
} 