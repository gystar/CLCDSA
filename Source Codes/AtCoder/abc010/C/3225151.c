#include<stdio.h>

int main(){
	int txa,tya,txb,tyb,T,V,n,i;
	scanf("%d %d %d %d %d %d",&txa,&tya,&txb,&tyb,&T,&V);
	scanf("%d",&n);
	int x[n+1],y[n+1];
	for(i=1;i<=n;i++) scanf("%d %d",&x[i],&y[i]);
	
	for(i=1;i<=n;i++){
		if(sqrt((txa-x[i])*(txa-x[i])+(tya-y[i])*(tya-y[i]))+sqrt((txb-x[i])*(txb-x[i])+(tyb-y[i])*(tyb-y[i]))<=T*V){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
} 