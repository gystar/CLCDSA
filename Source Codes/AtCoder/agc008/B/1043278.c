#include <stdio.h>

#define MAX(x,y) (((x)>(y))?(x):(y))
#define MIN(x,y) (((x)<(y))?(x):(y))

int a[100000];
long long int max;

int main(){
  int n, k, i;
  long long int ac, bc, z;
  scanf("%d%d", &n, &k);
  for(i=0;i<n;i++){
    scanf("%d", a+i);
    max += MAX(a[i], 0);
  }

  ac = bc = 0;
  for(i=0;i<k;i++){
    ac+=MAX(a[i], 0);
    bc+=a[i];
  }

  z = ac-MAX(bc, 0);
  for(;i<n;i++){
    ac+=MAX(a[i], 0) - MAX(a[i-k], 0);
    bc+=a[i] - a[i-k];
    z = MIN(z, ac - MAX(bc, 0));
  }

  printf("%lld\n", max - z);

  return 0;
} 