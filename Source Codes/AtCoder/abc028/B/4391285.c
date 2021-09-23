#include <stdio.h>
#include <string.h>

int main(void){
  char s[100];
  scanf("%s",s);

  int cnt[6] = {0,0,0,0,0,0};
  for(int i = 0;i < strlen(s);i++){
    cnt[s[i]-'A']++;
  }
  for(int i = 0;i < 5;i++){
    printf("%d ",cnt[i]);
  }
  printf("%d\n",cnt[5]);

  return 0;
} 