#include <stdio.h>
#include <string.h>

int main(void){
  char str[200000];
  scanf("%s",str);

  int start,end;
  for(int i = 0;;i++){
    if(str[i] == 'A'){
      start = i;
      break;
    }
  }
  for(int i = strlen(str);;i--){
    if(str[i] == 'Z'){
      end = i;
      break;
    }
  }
  printf("%d\n",end-start+1);

  return 0;
} 