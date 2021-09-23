#include <stdio.h>

int main(void)
{
	char a[100],b[100],c[100];
	int a_last=0,b_last=0;
	
	scanf("%s %s %s",a,b,c);
	
	for(int i=0;a[i]!='\0';i++){
		a_last++;
	}
	for(int j=0;b[j]!='\0';j++){
		b_last++;
	}
	
	if(a[a_last-1]!=b[0]){
		printf("NO\n");
	}else if(b[b_last-1]!=c[0]){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
	
	return 0;
} 