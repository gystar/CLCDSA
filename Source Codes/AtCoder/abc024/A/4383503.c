#include <stdio.h>
int main(){
int a,b,c,d,e,f;
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
int s=0;
s=a*e+b*f;

if(d>e+f) printf("%d\n",s);
else
if(d<=e+f) printf("%d\n",s-c*(e+f));

return 0;
} 