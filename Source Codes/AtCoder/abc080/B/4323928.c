#include<stdio.h>
#include<string.h>

int main(){
  int i,j,k=0;
  char A[256];
  scanf("%s",A);
  
  for(i=0;i<strlen(A);i++){
    k += A[i] - '0';
  }
  
  if(atoi(A)%k == 0){
    puts("Yes");
    return 0;
  }
  
  else
    puts("No");
  return 0;
} 