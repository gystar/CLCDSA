#include<stdio.h>

int main(){
		int n,i,csf[500][3],j;
		scanf("%d",&n);
		for(i=0;i<n-1;i++)scanf("%d%d%d",&csf[i][0],&csf[i][1],&csf[i][2]); 
		for(j=0;j<n-1;j++){
				long t=0;
				for(i=j;i<n-1;i++){
						if(t<csf[i][1])t=csf[i][1];
						if(t%csf[i][2]!=0)t+=csf[i][2]-t%csf[i][2];
						t+=csf[i][0];
				}
				printf("%ld\n",t);
		}
		puts("0");
		return 0;
} 