#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  int A[N];
  int flag[N];
  for(int i = 0;i < N;i++) scanf("%d",&A[i]),flag[i] = 0;

  int button = 0;
  int counter = 0;
  while(1){
    if(button == 1){
      printf("%d\n",counter);
      break;
    }
    if(flag[button]){
      printf("-1\n");
      break;
    }
    flag[button] = 1;
    button = A[button]-1;
    counter++;
  }

  return 0;
} 