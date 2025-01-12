#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
  int x = *(int*)a, y = *(int*)b;
  if( x > y ) 		{ return 1; }
  else if( x < y) 	{ return -1; }
  else 				{ return 0; }
}

int main(void)
{
  int n, i, oth; scanf("%d", &n);
  int a[n];
  for(i = 0; i < n; ++i) { scanf("%d", &a[i]); }
  qsort(a, n, sizeof(int), cmp);
  //for(i = 0; i < n; ++i) { printf(" %d", a[i]); }
  //printf("\n");
  
  oth = 0;
  for(i = 0; i < n-1; ++i) { oth += a[i]; }
  if( a[i] < oth ) { printf("Yes\n"); } else { printf("No\n"); }
  return 0;
} 