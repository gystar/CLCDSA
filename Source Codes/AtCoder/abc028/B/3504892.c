#include <stdio.h>
#include <string.h>

int main(void){
  char s[101];
  int i;
  int a=0, b=0, c=0, d=0, e=0, f=0;
  scanf("%s", &s);
  
  for(i = 0; i < strlen(s); i++){
    if(s[i] == 'A') a++;
    else if(s[i] == 'B') b++;
    else if(s[i] == 'C') c++;
    else if(s[i] == 'D') d++;
    else if(s[i] == 'E') e++;
    else f++;
  }
  
  printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
  return 0;
} 