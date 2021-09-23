#include <stdio.h>
#include <stdlib.h>

const int comp_double(const void* p, const void* q)
{
  if( *(double*)p > *(double*)q ) return -1;
  if( *(double*)p < *(double*)q ) return 1;
  return 0;
}

int main()
{

  size_t N;
  double H = 0.0, damage = 0.0;
  int count = 0;
  scanf("%zi %lf%*[^\n]%*c", &N, &H);

  double* a = malloc(N * sizeof(double));
  double* b = malloc(N * sizeof(double));
  for (size_t i = 0; i < N; i++)
  {
    scanf("%lf %lf%*[^\n]", &a[i], &b[i]);
    getchar();
  }
  qsort(a, N, sizeof(double), comp_double), qsort(b, N, sizeof(double), comp_double);
  for (size_t i = 0; i < N; i++)
  {
    if (b[i] <= a[0]) break;
    damage += b[i];
    count++;
    if (damage >= H) break;
  }
  while (damage < H) 
  {
    damage += a[0];
    count++;
  }
  printf("%i\n", count);
  free(a);
  free(b);

  return 0;
} 