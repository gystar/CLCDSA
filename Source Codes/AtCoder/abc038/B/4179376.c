#include<stdio.h>

int main(){
  int H1, H2, W1, W2;
  scanf("%d %d", &H1, &W1);
  scanf("%d %d", &H2, &W2);
  
  if((H1 == H2) || (H1 == W2) || (W1 == H2) || (W1 == W2)){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  
  return 0;
} 