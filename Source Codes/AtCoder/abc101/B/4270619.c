#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  int i,j,k=0;
  
  char N[256];
  
  scanf("%s",N);
  
  for(i=0;i<strlen(N);i++){
    k += (N[i] - '0');
  }
  
  j = atoi(N);
  
  if(j%k == 0)
    puts("Yes");
  
  else
    puts("No");
  
  return 0;
} 