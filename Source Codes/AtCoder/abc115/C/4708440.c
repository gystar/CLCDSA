#include <stdio.h>
#include <stdlib.h>
int cp(const int*a,const int*b){return *a-*b;}
int main(void){
int n,k,h[101000],i,j,s;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++) scanf("%d",&h[i]);
qsort(h,n,sizeof(int),cp);
s=h[k-1]-h[0];
for(i=k;i<n;i++)if(s>h[i]-h[i-k+1])s=h[i]-h[i-k+1];
printf("%d",s);
return 0;
} 