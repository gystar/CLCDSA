#include <stdio.h>

int main(void){
  int L,H,N;
  scanf("%d%d%d",&L,&H,&N);

  int a;
  for(int i = 0;i < N;i++){
    scanf("%d",&a);
    if(a < L) printf("%d\n",L-a);
    else if(a > H) printf("-1\n");
    else printf("0\n");
  }

  return 0;
} 