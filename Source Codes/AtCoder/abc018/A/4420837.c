#include <stdio.h>

int main(void){
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);

  if(A > B && A > C) printf("1\n");
  else if(A < B && A < C) printf("3\n");
  else printf("2\n");

  if(B > A && B > C) printf("1\n");
  else if(B < A && B < C) printf("3\n");
  else printf("2\n");

  if(C > B && C > A) printf("1\n");
  else if(C < B && C < A) printf("3\n");
  else printf("2\n");

  return 0;
} 