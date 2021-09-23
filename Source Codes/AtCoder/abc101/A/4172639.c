#include <stdio.h>

int main(void){
  int ans = 0;
  char data[4];

  scanf("%s",data);

  for(int i = 0;i < 4;i++){
    if(data[i] == '+')
      ans++;
    else
      ans--;
  }

  printf("%d\n",ans);
  return 0;
} 