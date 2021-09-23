# include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    char color;
    scanf("%c", &color);
    if (color == 'Y'){
      printf("%s\n","Four");
      return 0;
    }
  }
  printf("%s\n","Three");
  return 0;
} 