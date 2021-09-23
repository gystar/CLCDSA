#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  
  if(N >= 64){
    printf("64\n");
  } else if(N >= 32){
    printf("32\n");
  } else if(N >= 16){
    printf("16\n");
  } else if(N >= 8){
    printf("8\n");
  } else if(N >= 4){
    printf("4\n");
  } else if(N >= 2){
    printf("2\n");
  } else {
    printf("1\n");
  }
  
  return 0;
} 