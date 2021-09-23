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
  char s[101],t[101];
  scanf("%s%s",s,t);
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;i+j<n;j++){
      if(s[i+j]!=t[j]) break;
    }
    if(i+j>=n) break;
  }
  printf("%d\n",n+i);
}

int main(void){
  run();
  return 0;
} 