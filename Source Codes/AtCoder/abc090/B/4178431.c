#include <stdio.h>

int main(void){
  long A,B;
  int ans = 0;
  scanf("%ld%ld",&A,&B);

  for(int i = A;i <= B;i++){
    if(i%10 == i/10000){
      if((i/1000)%10 == (i/10)%10){
        ans++;
      }
    }
  }

  printf("%d\n",ans);
  return 0;
} 