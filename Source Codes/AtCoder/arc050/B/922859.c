#include<stdio.h>
int main(){
  long long a,b,x,y,l=0,r,m,s;
  scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
  r=a;
  if(r<b)r=b;
  x--;
  y--;
  while(l-r){//printf("%lld %lld\n",l,r);
    m=(l+r+1)/2;
    s=(a-m)/x+(b-m)/y;
    if(a<m||b<m)s=-1;
    s<m?(r=m-1):(l=m);
  }
  printf("%lld\n",l);
  return 0;
} 