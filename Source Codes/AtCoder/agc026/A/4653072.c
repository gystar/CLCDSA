#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

void run (void) {
  i32 n;
  scanf ("%" SCNi32, &n);
  i32 a[100];
  for (i32 i = 0; i < n; ++i) {
    scanf("%" SCNi32, a + i);
  }
  i32 ans = 0;
  for (i32 i = 1; i < n; ++i) {
    if (a[i] == a[i - 1]) {
      a[i] = a[i + 1] + 1;
      ans++;
    }
  }
  printf("%" PRIi32 "\n",ans);
}

int main (void) {
  run ();
  return 0;
} 