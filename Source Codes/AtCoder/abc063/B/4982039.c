#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  char s[27];
  scanf("%s", s);
  
  int n = strlen(s);
  int flag = 0;
  
  for(int i = 1; i < n; i++){
    for(int j = 0; j < i; j++){
      if(s[i] == s[j]){
        flag++;
        break;
      }
    }
    if(flag > 0){
      break;
    }
  }
  
  if(flag > 0){
    printf("no\n");
  }
  else{
    printf("yes\n");
  }
  
  return 0;
} 