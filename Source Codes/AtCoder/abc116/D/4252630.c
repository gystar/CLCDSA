#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
  int64_t t, d;
} sushi;

int compare(const void *a, const void *b) {
    if (((sushi *)b)->d > ((sushi *)a)->d) {
      return 1;
    }
    if (((sushi *)b)->d < ((sushi *)a)->d) {
      return -1;
    }
    return 0;
}

int has_type(int64_t *types, int64_t type_count, int64_t type) {
  int64_t i;
  for (i = 0; i < type_count; i++) {
    if (types[i] == type) {
      return 1;
    }
  }
  return 0;
}

int64_t solv(const int64_t n, const int64_t k) {
  sushi *sushis, *dups, *dp;
  int64_t i, *original_types, type_count = 0;
  int64_t ans, max = 0, sum = 0, count = 0;

  sushis = (sushi *)malloc(sizeof (sushi) * n);
  original_types = (int64_t *)malloc(sizeof (int64_t) * k);
  dups = dp = (sushi *)malloc(sizeof (sushi) * k);

  for (i = 0; i < n; i++) {
    scanf("%lld %lld", &sushis[i].t, &sushis[i].d);
  }
  qsort(sushis, n, sizeof (sushi), compare);

  for (i = 0; i < n && type_count < k; i++) {
    if (count == k) {
      if (has_type(original_types, type_count, sushis[i].t)) {
        continue;
      }
      sum += sushis[i].d - (--dp)->d;
      original_types[type_count++] = sushis[i].t;
    } else {
      if (has_type(original_types, type_count, sushis[i].t)) {
        *(dp++) = sushis[i];
      } else {
        original_types[type_count++] = sushis[i].t;
      }
      sum += sushis[i].d;
      count++;
    }

    ans = sum + type_count * type_count;
    if (max < ans) {
      max = ans;
    }
  }

  free(original_types);
  free(sushis);
  free(dups);

  return max;
}

int main(int argc, char **argv) {
  int64_t n, k;

  while (scanf("%lld %lld", &n, &k) != EOF) {
    printf("%lld\n", solv(n, k));
  }

  return 0;
} 