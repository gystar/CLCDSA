#include<stdio.h>
#include<string.h>
 
int main(){
  int N, A, B, i, d, l = 0;
  char s1[5];
  scanf("%d %d %d", &N, &A, &B);
  for (i = 0; i < N; i++){
    scanf("%s %d", s1, &d);
    if(d > B){
      d = B;
    } else if(d < A){
      d = A;
    }
    if(s1[0] == 'W'){
      d = -d;
    }
    l += d;
  }
  
  if(l > 0){
    printf("East %d\n", l);
  } else if(l == 0){
    printf("0\n");
  } else {
    printf("West %d\n", -l);
  }
  
  return 0;
} 