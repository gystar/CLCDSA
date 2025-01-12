#include <stdio.h>

int N;
int insu[101];

int num(int m){
  int count = 0;
  for(int i = 0;i <= N;i++){
    if(insu[i] >= m-1) count++;
  }
  return count;
}

int main(void){
  int ans = 0;
  scanf("%d",&N);

  for(int i = 0;i <= 101;i++) insu[i] = 0;

  for(int i = 2;i <= N;i++){
    int sample = i;
    for(int j = 2;j <= i;j++){
      while(sample%j == 0){
        sample /= j;
        insu[j]++;
      }
    }
  }
  
  ans += num(75);
  ans += num(15)*(num(5)-1);
  ans += num(25)*(num(3)-1);
  ans += num(5)*(num(5)-1)*(num(3)-2)/2;
  printf("%d\n",ans);
  return 0;
} 