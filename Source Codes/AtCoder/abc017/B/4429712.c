#include <stdio.h>
#include <string.h>

int main(void){
  char s[50];
  scanf("%s",s);
  
  int ans = 1;
  for(int i = 0;i < strlen(s);i++){
    switch(s[i]){
      case 'c':
        if(s[i+1] != 'h')
          ans = 0;
        i++;
        break;
      case 'o':
      case 'k':
      case 'u':
        break;
      default:
        ans = 0;
    }
  }

  if(ans == 0) printf("NO\n");
  else printf("YES\n");
  return 0;
} 