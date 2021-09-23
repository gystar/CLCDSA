#include <stdio.h>
#include <string.h>

int main(){
  char S[30] = {};
  scanf("%s", S);

  for(int i = 0; i < strlen(S); i++){
    for(int j = i + 1; j < strlen(S); j++){

      if(S[i] == S[j]){
        printf("no\n");
        return 0;
      }

    }
  }

  printf("yes\n");

  return 0;
} 