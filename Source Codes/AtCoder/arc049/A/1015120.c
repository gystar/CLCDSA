#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,n,a[4];
	char s[100];
	scanf("%s",s);
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	j=0;
	n=strlen(s);
	for(i=0;i<=n;i++){
		if(a[j]==i){
			printf("\"");
			j++;
		}
		if(i==n){
			printf("\n");
		}
		else{
			printf("%c",s[i]);
		}
	}
	return 0;
} 