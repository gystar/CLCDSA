#include <stdio.h>
#include <stdlib.h>

//??????
int compare(const void *a, const void * b){
  return *(int *)a - *(int *)b;
}

int main(){
  int N;
  int a[110] = {};
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%d", &a[i]);
  }
  qsort(a, N, sizeof(int), compare);
  printf("%d\n", a[N-1] - a[0]);
  return 0;
} 