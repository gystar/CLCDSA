#include <stdio.h>
#include <string.h>

int main() {
  int N;
  scanf("%d",&N);
  char word[N][11];
  scanf("%s",&word[0][0]);
  int len1,len2;
  len1 = strlen(&word[0][0]);
  for (int i = 1; i < N; i++) {
    scanf("%s",&word[i][0]);
    if (word[i-1][len1-1] != word[i][0]) {
      printf("No\n");
      return 0;
    }
    len2 = strlen(&word[i][0]);
    len1 = len2;
    for (int j = 0; j < i; j++) {
      if (strcmp(&word[j][0],&word[i][0]) == 0) {
        printf("No\n");
        return 0;
      }
    }
  }
  printf("Yes\n");
  return 0;
} 