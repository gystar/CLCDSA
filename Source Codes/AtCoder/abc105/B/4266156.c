#include<stdio.h>

int main(){
  int N,i,j,k;
  
  scanf("%d",&N);
  
  for(i = 0;i <= N;i+=7){
    j = N - i;
    if(j % 4 == 0){
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
} 