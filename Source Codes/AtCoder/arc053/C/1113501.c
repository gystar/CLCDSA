#include <stdio.h>
#include <stdlib.h>

#define max(a, b) ((a) > (b) ? (a) : (b));

typedef long long ll;

typedef struct _data data;
struct _data {
  ll a, b;
};

int compare(const void *p1, const void *p2) {
  data ab1 = *(data *)p1;
  data ab2 = *(data *)p2;
  if ((ab1.a <= ab1.b && ab2.a >  ab2.b) ||
      (ab1.a <= ab1.b && ab2.a <= ab2.b && ab1.a <= ab2.a) ||
      (ab1.a >  ab1.b && ab2.a >  ab2.b && ab1.b >  ab2.b)) return -1;
  if (ab1.a == ab2.a && ab1.b == ab2.b) return 0;
  return 1;
}

int main() {
  int n;

  scanf("%d", &n);
  data ab[n];
  for (int i = 0; i < n; i++) {
    ll a, b;
    scanf("%lld %lld", &a, &b);
    ab[i].a = a;
    ab[i].b = b;
  }

  ll ans = 0;
  ll sum = 0;
  qsort(ab, n, sizeof(data), compare);
  for (int i = 0; i < n; i++) {
    sum += ab[i].a;
    ans = max(ans, sum);
    sum -= ab[i].b;
  }

  printf("%lld\n", ans);
  
  return 0;
} 