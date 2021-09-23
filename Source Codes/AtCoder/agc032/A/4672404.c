#include <stdio.h>

int main(){
  int b[100];
  int n;
  int score;
  scanf("%d\n",&n);
  for(int i=0; i<n; i++) {
    scanf("%d",&b[i]);
    if(b[i]>i+1) {
      printf("-1");
      return 0;
    }
  }
  for(int i=0; i<n;i++){
    for(int j=n-1; j>=0; j--){
      score = 1;
      if(b[j] > n) continue;
      for(int k=j-1; k>=0; k--){
        if(b[k]==200) score++;
      }
      if(score == b[j]) {
        printf("%d\n",b[j]);
        b[j] = 200;
        break;
      }
    }
  }     
  return 0;
} 