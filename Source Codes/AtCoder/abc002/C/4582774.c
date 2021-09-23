#include <stdio.h>
#include <stdlib.h>
int main(){int a,b,c,d,e,f,k;scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);k=abs((c-a)*(f-b)-(e-a)*(d-b));if(k%2==0)printf("%d\n",k/2);else printf("%d.5\n",k/2);} 