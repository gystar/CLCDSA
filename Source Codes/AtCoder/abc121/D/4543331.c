#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

uint64_t xor(uint64_t n)
{
  return n % 4 == 0 ? n : n ^ xor(n - 1);
}

int main(void)
{
  uint64_t a, b;
  scanf("%" SCNu64 "%" SCNu64, &a, &b);
  printf("%" PRIu64 "\n", xor(a - 1) ^ xor(b));
} 