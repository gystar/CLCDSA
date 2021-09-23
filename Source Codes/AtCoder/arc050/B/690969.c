#include <stdio.h>

int main(){
  long long int R,B;
  long long int r,b;
  long long int x,y;
  long long int i,j;
  long long int l,h,m;
  scanf("%lld %lld",&R,&B);
  scanf("%lld %lld",&x,&y);
  l=0;
  if(R>=B)h=R;
  else h=B;
  while(h-l>1){
    m=(l+h)/2;
    r=R-m;
    b=B-m;
    if( r>=0 && b>=0 && r/(x-1)+b/(y-1)>=m)l=m;
    else h=m;
    
  }
  printf("%lld\n",l);
  return 0;
} 