#include <stdio.h>

void bsort(int a[], int n)
{
  int i, j;

  for (i = 0; i < n - 1; i++) {
    for (j = n - 1; j > i; j--) {
      if (a[j - 1] > a[j]) {
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  }
}

int main(void)
{
  int n, i;
  int l[200];

  scanf("%d", &n);
  for (i = 0; i < 2 * n; i++)
    scanf("%d", &l[i]);

  bsort(l, 2 * n);

  int sum = 0;

  for (i = 0; i < 2 * n; i++)
    if (i % 2 == 0) {
      sum += l[i];
    }

  printf("%d\n", sum);

  return 0;
} 