#include <stdio.h>

int gcd(int a, int b){
  int r = a % b;
  while(r > 0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int gcd_array(int n,int *a){
  if(n == 1) return a[0];
  else return gcd(gcd_array(n-1,a),a[n-1]);
}
  

int main(){
  int n;
  scanf("%d\n",&n);
  int a[n];
  for(int i = 0; i < n; ++i) scanf("%d",&a[i]);
  int maxgcd = gcd_array(n,a);
  printf("%d\n",maxgcd);
  return 0;
} 