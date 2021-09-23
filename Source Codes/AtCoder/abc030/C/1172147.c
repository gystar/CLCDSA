#include<stdio.h>
#include<stdlib.h>

int main(){
  long N,M,X,Y,*a,*b,*pa,*pb,*pab,*ptmp,i,ans=0;

  scanf("%ld%ld%ld%ld",&N,&M,&X,&Y);
  a=calloc(N+1,sizeof(long));
  b=calloc(M+1,sizeof(long));
  pa=a;
  pb=b;

  while(N--)
    scanf("%ld",pa++);
  while(M--)
    scanf("%ld",pb++);

  pa=a;
  pb=b;

  while(1){
    while(*pa+X>*pb){
      *pb++;
      if(!*pb){
	printf("%ld\n",ans);
	return 0;
      }
    }

    *pa++;
    while(*pb+Y>*pa){
      *pa++;
      if(!*pa){
	printf("%ld\n",ans+!!*pb);
	return 0;
      }
    }
    *pb++;
    ans++;
  }
} 