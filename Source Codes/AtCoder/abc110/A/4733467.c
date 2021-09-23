#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
  int a[3];
  for (int i = 0; i < 3; i++) {
    scanf("%d",&a[i]);
  }
  qsort(a,3,sizeof(int),compare_int);
  printf("%d\n",10*a[2]+a[1]+a[0]);
  return 0;
} 