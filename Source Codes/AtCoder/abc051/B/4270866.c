#include<stdio.h>

int main(){
	int x,y,z;
	int s,k;
	int cnt=0;
	scanf("%d%d",&k,&s);
	for(int i=0;i<=k;i++){
		for(int j=0;j<=k;j++){
			if(s-i-j>=0&&s-i-j<=k){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
} 