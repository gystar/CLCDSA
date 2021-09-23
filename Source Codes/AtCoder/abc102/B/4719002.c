#include<stdio.h>
int min2(int a, int b){return a>b?b:a;}
int max2(int a, int b){return a<b?b:a;}
int n, i;
int a, min, max;
int main(void){
  min=1000000001;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a);
    min=min2(min, a);
    max=max2(max, a);
  }
  printf("%d\n", max-min);
} 