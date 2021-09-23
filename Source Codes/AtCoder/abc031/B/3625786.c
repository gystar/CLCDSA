#include<stdio.h>

int main(){
int l,r,n,i,a;
scanf("%d%d%d",&l,&r,&n);
for(i=0;i<n;i++){
scanf("%d",&a);
if(a<l)printf("%d\n",l-a);
else if(a<=r)puts("0");
else puts("-1");
}
return 0;
} 