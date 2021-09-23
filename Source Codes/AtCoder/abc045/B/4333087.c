#include <stdio.h>
#include <string.h>

int main(void){
  char s[3][101];
  scanf("%s%s%s",s[0],s[1],s[2]);

  int cnt[3] = {0,0,0};
  int turn = 0;
  while(1){
    if(s[turn][cnt[turn]] == 0){
      printf("%c\n",'A'+turn);
      return 0;
    }
    turn = s[turn][cnt[turn]++]-'a';
  }
} 