#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int n,ans=0;
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		char ch;
		scanf("%c",&ch);
		if(ch=='A')ans+=4;
		if(ch=='B')ans+=3;
		if(ch=='C')ans+=2;
		if(ch=='D')ans+=1;
	}
	if(ans==0)printf("0\n");
	else printf("%.14f",(double)ans/(double)n);
	return 0;
} 