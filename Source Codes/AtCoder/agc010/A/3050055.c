#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int n;
  scanf("%d",&n);
  int cnt=0;
  while(n--){
    int a;
    scanf("%d",&a);
    cnt+=a%2;
  }
  printf("%s\n",cnt%2==0?"YES":"NO");
}

int main(void){
  run();
  return 0;
} 