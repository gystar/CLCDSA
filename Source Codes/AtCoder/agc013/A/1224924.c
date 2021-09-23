#include <stdio.h>

int test(int a, int n){
  // printf("(%d, %d)\n", a, n);
  if(n<=0) return 1;
  int b=a;
  do{
    a=b;
    scanf("%d", &b);
    n--;
  }while(a==b && n>0);
  if(n==0) return 1;
  if(a>b){
    do{
      a=b;
      scanf("%d", &b);
      n--;
    }while(a>=b && n>0);
    if(a>=b && n==0) return 1;
    else return test(b, n) + 1;
  }else{
    do{
      a=b;
      scanf("%d", &b);
      n--;
    }while(a<=b && n>0);
    if(a<=b && n==0) return 1;
    else return test(b, n) + 1;
  }
}

int main()
{
  int a, b, c, n, i, f, ans=1;
  scanf("%d", &n);
  scanf("%d", &a);
  printf("%d\n", test(a, n-1));
  return 0;
} 