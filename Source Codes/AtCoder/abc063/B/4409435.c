#include<stdio.h>
#include<string.h>

int main(){
  int i,j,k;
  
  char S[100];
  
  scanf("%s",S);
  
  for(i=0;i<strlen(S);i++){
    for(j=0;j<i;j++){
      if(S[j] == S[i]){
        puts("no");
        return 0;
      }
    }
  }
  
  puts("yes");
  return 0;
} 