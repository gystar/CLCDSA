#include <stdio.h>
#define N  200001

int main(void){
  char s[N] = { '\0' };
  scanf("%s", s);
  int a, z;
  int c = 1;
  while(s[c] != '\0') c++;
  for(int i = 0; i < c; i++){
    if(s[i] == 'A'){
      a = i;
      break;
    }
  }
  for(int i = c; i > a; i--){
    if(s[i] == 'Z'){
      z = i;
      break;
    }
  }
  printf("%d\n", z - a + 1);
  return 0;
} 