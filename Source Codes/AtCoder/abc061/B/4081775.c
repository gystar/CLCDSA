#include <stdio.h>
int main()
{
  int N, M, i, a, b;
  scanf("%d %d", &N, &M);
  int arr[N];
  for (i=0; i<N; i++) arr[i]=0;
  for (i=0; i<M; i++) {
    scanf("%d %d", &a, &b);
    arr[a-1]+=1;
    arr[b-1]+=1;
  }
  for (i=0; i<N; i++) printf("%d\n", arr[i]);
  return 0;
} 