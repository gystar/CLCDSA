#include <stdio.h>

int main(){
  int i=0,n;
  char A[10];
  scanf("%s",A);
  while(A[i]!=NULL){
    i++;
  }
  n=i;
  if(n==1 && A[0]=='a'){
    printf("-1\n");
    return 0;
  }
  printf("a\n");
} 