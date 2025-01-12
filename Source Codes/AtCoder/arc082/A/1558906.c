#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main() {
  int n, i;
  int a[100010];
  int num[100010] = {};
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    num[a[i]] += 1;
  }
  int num_3[100010];
  for (i = 0; i < 100010; i++) {
    num_3[i] = num[i-1] + num[i] + num[i+1];
  }
  qsort(num_3, 100010, sizeof(int), compare_int);
  printf("%d", num_3[0]);
  return 0;
} 