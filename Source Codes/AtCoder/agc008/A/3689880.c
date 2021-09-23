#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int a,b;
  int n;

  scanf( "%d%d", &a, &b );
  n = 0;
  if( a == 0 ){
    if( b < 0 ) n = 1; 
  }
  else if( b == 0 ){
    if( a > 0 ) n = 1; 
  }
  else{
    if( (a<0 && b>0)||(a>0 && b<0)) n = 1;
    else{
      if( b < a ) n = 2;
    }
  }

  n += abs(abs(a)-abs(b));
  printf( "%d\n", n );
  return 0;
} 