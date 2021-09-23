#include <stdio.h>

int main(void){
  int m;
  scanf("%d",&m);

  int ans;

  if(m < 100){
    printf("00\n");
  }else if(m <= 5000){
    if(m < 1000)
      printf("0");
    printf("%d\n",m/100);
  }else if(m <= 30000){
    printf("%d\n",m/1000+50);
  }else if(m <= 70000){
    m -= 30000;
    m /= 5;
    m += 80000;
    printf("%d\n",m/1000);
  }else{
    printf("89\n");
  }

  return 0;
} 