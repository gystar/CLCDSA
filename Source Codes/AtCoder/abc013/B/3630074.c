#include <stdio.h>
#include <stdlib.h>
int main(void){int a,b,ans;scanf("%d%d",&a,&b);if(abs(a-b)<5)ans=abs(a-b);else ans=10-abs(a-b);printf("%d\n",ans);return 0;} 