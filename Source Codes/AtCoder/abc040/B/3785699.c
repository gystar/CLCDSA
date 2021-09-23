#include<stdio.h>
int n, ans, h;
int abs(int a);
int main(){
  scanf("%d", &n);
  ans=n;
  for(h=1; h<=n; h++){
    if(abs(n/h-h)+(n%h) < ans){ans = abs(n/h-h)+(n%h);}
  }
  printf("%d\n", ans);
}
int abs(int a){
  return a<0?-a:a;
} 