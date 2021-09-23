#include<stdio.h>
int min2(int a, int b){return a>b?b:a;}
int n, i;
int x, m, min;
int main(){
  scanf("%d%d", &n, &x);
  min=1024;
  for(i=0; i<n; i++){
    scanf("%d", &m);
    x -= m;
    min = min2(min, m);
  }
  printf("%d\n", n+x/min);
} 