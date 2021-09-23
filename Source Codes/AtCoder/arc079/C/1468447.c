#include<stdio.h>
#include<stdlib.h>

int compare_ll(const void *a, const void *b)
{
    return *(long long*)a - *(long long*)b;
}

long long a[51] = {};

int main() {
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
  }
  qsort(a, n, sizeof(long long), compare_ll);
  long long count = 0;
  while (a[n-1] >= n) {
    long long sho = a[n-1] / n;
    long long amari = a[n-1] % n;
    count += sho;
    a[n-1] = amari;
    /*printf("%lld, %lld\n", sho, amari);*/
    for (i = 0; i < n-1; i++) {
      a[i] += sho;
    }
    int ptr;
    for (i = 0; i < n; i++) {
      if (a[i] > amari) {
	ptr = i;
	break;
      }
    }
    for(i = n-1; i > ptr; i--) {
      a[i] = a[i-1];
    }
    a[ptr] = amari;
    /*
    for (i = 0; i < n; i++) {
    printf("%lld ", a[i]);
    }
    */
  }
  printf("%lld\n", count);
  return 0;
} 