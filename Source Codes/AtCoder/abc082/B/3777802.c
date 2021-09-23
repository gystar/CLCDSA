#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  return *(int *)a - *(int *)b;
}

int main(void){
  char s[110] = {};
  char t[110] = {};

  scanf("%s %s", s, t);
  int ls = strlen(s), lt = strlen(t);

  for(int i = 0; i < ls; i++){
    for(int j = 0; j < lt; j++){

      if(s[i] < t[j]){
        printf("Yes\n");
        return 0;
      }

    }
  }

  if(ls >= lt){
    printf("No\n");
  }else{
    for(int i = 0; i < ls; i++){
      int flag = 0;
      for(int j = 0; j < lt; j++){
        if(s[i] == t[j]){
          flag = 1;
          t[j] = 0;
          break;
        }
      }
      if(flag == 0){
        printf("No\n");
        return 0;
      }
    }
    printf("Yes\n");
  }
  return 0;
} 