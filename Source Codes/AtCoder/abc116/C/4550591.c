#include <stdio.h>
#include <stdlib.h>

int h[100]={0},ans=0;

void count(int l,int r,int m){
	if(r!=l){
		int min = 101,index;
		for(int i=l;i<r;i++){
			if(h[i] < min){
				min = h[i];
				index = i;
			}
		}
		ans += min-m;
		count(l,index,min);
		count(index+1,r,min);
	}
}

int main(void){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&h[i]);
	}
	count(0,n,0);
	printf("%d",ans);
	return 0;
} 