#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n,t,a[100005],res;
	scanf("%d%d",&n,&t);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	
	for (int i=0;i<n;i++){
	    if (i!=n-1){
	        if (a[i+1]>a[i]+t){
	            res += t;
	        }else{
	            res += (a[i+1]-a[i]);
	        }
	    }else{
	        res += t;
	    }
	}
	printf("%d\n",res);
	
	return 0;
} 