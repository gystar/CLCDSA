#include <stdio.h>

#define A 500
#define B 100
#define C 50

int varidateABC(int);
int isX(int, int, int, int);

int
main(){
  int a, b, c, x, count = 0;
  int i, j, k;
  scanf("%d", &a);
  if (a < 0 || 50 < a)
    return 1;
  scanf("%d", &b);
  if (b < 0 || 50 < b)
    return 1;
  scanf("%d", &c);
  if (c < 0 || 50 < c || (a + b + c) < 1)
    return 1;
  scanf("%d", &x);
  if(x < 50 || 20000 < x || x % 50)
    return 1;
  
  for(i = 0; i <= a; i++){
    for(j = 0; j <= b; j++){
      for(k = 0; k <= c; k++){
        if(!isX(i, j, k, x)){
          count += 1;
        }
      }
    }
  }
  printf("%d\n", count);
  return 0;
}


int isX(int a, int b, int c, int x){
  return (x == A * a + B * b + C * c) ? 0:1;
} 