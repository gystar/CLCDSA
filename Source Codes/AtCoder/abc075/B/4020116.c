#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

#define INF 1e9
#define LLINF 1e18
#define PI 3.1415926535897932384
#define MOD 1000000007

typedef long long ll;
typedef long double ld;

int main(void) {
  char s[60][60];
  int height, width;
  scanf("%d%d", &height,&width);
  for(int i=0; i<height; ++i) scanf("%s", s[i]);
  for(int i=0; i<height; ++i) {
    for(int j=0; j<width; ++j) {
      if(s[i][j] != '.') continue;
      char r = '0';
      for(int k=-1; k<=1; ++k) {
        for(int l=-1; l<=1; ++l) {
          if(i+k < 0 || j+l<0) continue;
          if(s[i+k][j+l] == '#') ++r;
        }
      }
      s[i][j] = r;
    }
  }
  for(int i=0; i<height; ++i) printf("%s\n", s[i]);
  return 0;
} 