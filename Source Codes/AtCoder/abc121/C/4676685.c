#include <stdio.h>
#include <stdlib.h>

struct pair{
  long a;
  int b;
};

int compare(const void *x, const void *y) {
  return ((struct pair *)x)->a - ((struct pair *)y)->a;
}

int main() {
  int N,M;
  scanf("%d %d",&N,&M);
  struct pair AB[N];
  for (int i = 0; i < N; i++) {
    scanf("%ld %d",&AB[i].a,&AB[i].b);
  }
  qsort(AB,N,sizeof(struct pair),compare);

  struct pair ab = {0,M};
  for (int i = 0; i < N; i++) {
    if (ab.b >= AB[i].b) {
      ab.a += AB[i].a*AB[i].b;
      ab.b -= AB[i].b;
    }
    else {
      ab.a += AB[i].a*ab.b;
      break;
    }
  }
  printf("%ld\n",ab.a);
  return 0;
} 