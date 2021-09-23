#include <stdio.h>

int main(void)
{int a,b,c,d;
 scanf("%d%d%d%d",&a,&b,&c,&d);
 int sum=0;
 if(a>=b){sum+=b;}else{sum+=a;}
 if(c>=d){sum+=d;}else{sum+=c;}
 printf("%d",sum);
 return 0;
} 