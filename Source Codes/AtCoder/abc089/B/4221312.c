#include<stdio.h>

int main(){
  int N, flag = 0;
  char s[100];
  
  scanf("%d", &N);
  for (int i = 0; i < N; i++){
    scanf("%c", &s[i]);
    if(s[i] == 'Y'){
      flag = 1;
    }
  }
  if(flag == 0){
    printf("Three\n");
  } else {
    printf("Four\n");
  }
  
  return 0;
} 