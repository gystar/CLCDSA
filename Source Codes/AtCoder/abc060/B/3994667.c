#include<stdio.h>

int main(){
	int a,b,c,i;
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<b;i++){
		if(a*i%b==c){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
} 