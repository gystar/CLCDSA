#include<stdio.h>
#include<math.h>
int main(void)
{
	int txa,tya,txb,tyb,T,V,n,x[1000],y[1000],i,l;
	scanf("%d %d %d %d %d %d",&txa,&tya,&txb,&tyb,&T,&V);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	l=T*V;
	double a,b;
	for(i=0;i<n;i++){
		a=(double)sqrt((txa-x[i])*(txa-x[i])+(tya-y[i])*(tya-y[i]));
		b=(double)sqrt((txb-x[i])*(txb-x[i])+(tyb-y[i])*(tyb-y[i]));
		if(a+b<=l){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
} 