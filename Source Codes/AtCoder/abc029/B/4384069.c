#include <stdio.h>
#include <string.h>

int main(void){
  char s[10];
  int ans = 0;
  for(int i = 0;i < 12;i++){
    scanf("%s",s);
    for(int j = 0;j < strlen(s);j++){
      if(s[j] == 'r'){
        ans++;
        break;
      }
    }
  }

  printf("%d\n",ans);

  return 0;
} 