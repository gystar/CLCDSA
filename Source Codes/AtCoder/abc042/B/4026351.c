#include <stdio.h>
#include <string.h>

int main(void){

  int N, L;
  int i, j;

  scanf("%d %d", &N, &L);

  char S[N][128];
  char temp[128];

  for(i = 0; i < N; i++){
    scanf("%s", S[i]);
  }

  for(i = 1; i < N; i++){
    for(j = 1; j < N; j++){
      if(strcmp(S[j - 1], S[j]) > 0){
	strcpy(temp, S[j - 1]);
	strcpy(S[j - 1], S[j]);
	strcpy(S[j], temp);
      }
    }
  }

  for(i = 0; i < N; i++){
    printf("%s", S[i]);
  }

  printf("\n");
      
  return 0;
} 