#include<stdio.h>
#include<math.h>

int main(){
  int i=1;
  int N;
  
  scanf("%d",&N);
  
  while(1){
    if(i*i > N){
      printf("%d\n",(i-1)*(i-1));
      return 0;
    }
    i++;
  }
} 