#include <stdio.h>
#define min(a,b) (a<b?a:b)
int main(){
	int i,n,m,x,a[1001],sum1=0,sum2=0;
  	scanf("%d%d%d",&n,&m,&x);
  	for(i=0;i<m;i++){
		scanf("%d", &a[i]);
      	if(a[i]<x){
		sum1++;
        }else{
		sum2++;
        }
    }

  	printf("%d",min(sum1,sum2));
} 