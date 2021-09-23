#include<stdio.h>

int main(){
	int n,i,sg=0,j;
	char s[101],t[101];
	scanf("%d%s%s",&n,s,t);
	for(i=n;i>=0;i--){
		int f=0;
		for(j=0;s[i+j]!=0;j++){
			if(s[i+j]!=t[j]){
				f=1;
				break;
			}
		}
		if(f!=1){
		sg=n-i;
	//		printf("%d\n",i);
	//		break;
		}
//		sg=n-i-1;
	}
	printf("%d\n",n*2-sg);
	return 0;
} 