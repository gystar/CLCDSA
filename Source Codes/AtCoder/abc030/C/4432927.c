#include<stdio.h>

int main(){
	int n,m,i,t=0;
	long long x,y,a[100000],b[100000],time=0;
	scanf("%d%d%lld%lld",&n,&m,&x,&y);
	for(i=0;i<n;i++)scanf("%lld",&a[i]);
	for(i=0;i<m;i++)scanf("%lld",&b[i]);
	while(1){
		if(t%2){
			if(time>b[m-1])break;
			int lb=-1,ub=m;
			while(ub-lb>1){
				int mid=(lb+ub)/2;
				if(b[mid]<time)lb=mid;
				else ub=mid;
			}
			time=b[ub]+y;
			t++;
		}else{
			if(time>a[n-1])break;
			int lb=-1,ub=n;
			while(ub-lb>1){
				int mid=(lb+ub)/2;
				if(a[mid]<time)lb=mid;
				else ub=mid;
			}
			time=a[ub]+x;
			t++;
		}
	}
	printf("%d\n",t/2);
	return 0;
} 