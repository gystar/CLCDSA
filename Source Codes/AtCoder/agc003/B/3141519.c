#include <stdio.h>
#include <string.h>
#define int long long
main()
{
  int N = 0;
  scanf("%lld",&N);

  int A[N];
  int i = 0;
  for(i = 0; i < N ; i++)
  {
	  scanf("%lld", &A[i]);
  }
  int CntPair = 0;

  for(i = 0; i < N ; i++)
  {
	 CntPair += A[i]/2;
	 if(i==N-1)break;
	 if(A[i]%2 == 1 && A[i+1]>0)
	 {
		 CntPair++;
		 A[i+1]--;
	 }
  }
  printf("%lld\n",CntPair);
  return 0;
} ./Main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
