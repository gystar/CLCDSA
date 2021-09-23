#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int N,num,cnt=0;
  int nums[100010] = {};
  scanf("%d",&N);
  for(int i=0; i<N; i++) {
    scanf("%d",&num);
    if(nums[num] != 0) cnt++;
    nums[num]++;
  }
  printf("%d\n",cnt);
  return 0;
} 