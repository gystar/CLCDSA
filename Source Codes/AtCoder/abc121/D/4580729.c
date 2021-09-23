#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

uint64_t xorsum(uint64_t n)
{
  return n % 4 == 0 ? n : n ^ xorsum(n - 1);
}

int main(void)
{
  uint64_t a, b;
  scanf("%" SCNu64 "%" SCNu64, &a, &b);
  printf("%" PRIu64 "\n", a ^ xorsum(a) ^ xorsum(b));
} 