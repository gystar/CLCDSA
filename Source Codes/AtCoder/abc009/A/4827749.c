#include <stdio.h>

int main() {
  int roundtrip, number_of_bucket;
  scanf("%d", &number_of_bucket);
  roundtrip = (number_of_bucket % 2 == 0)? number_of_bucket/2 : number_of_bucket/2 + 1;
  printf("%d\n", roundtrip);
  return 0;
} 