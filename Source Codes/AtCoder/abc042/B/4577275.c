#include <stdio.h>
#include <string.h>
int main(){
  int N, L;
  char s[100][101] = {{0}};
  char tmp[101];

  scanf("%d%d", &N, &L);

  for(int cnt = 0; cnt < N; cnt++){
    scanf("%s", s[cnt]);
  }

  for(int i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      if(strcmp(s[i], s[j]) > 0){
	strcpy(tmp, s[i]);
	strcpy(s[i], s[j]);
	strcpy(s[j], tmp);
      }
    }

  }

  for(int cnt = 0; cnt < N; cnt++){
    printf("%s", s[cnt]);
  }  

  printf("\n");
  
} 