#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

#define POS(i,j) ((i)*9+(j))

void run(void){
  int n;
  scanf("%d",&n);
  char x[901];
  int i,j;
  for(i=0;i<n;i++) scanf("%s",x+POS(i,0));
  int cnt=0;
  for(j=0;j<9;j++){
    for(i=0;i<n;i++){
      if(x[POS(i,j)]=='.') continue;
      cnt++;
      if(x[POS(i,j)]=='x') continue;
      while(i<n && x[POS(i,j)]=='o') i++;
      i--;
    }
  }
  printf("%d\n",cnt);
}

int main(void){
  run();
  return 0;
} 