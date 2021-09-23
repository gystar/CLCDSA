#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[4],j=0,i,len;
	char s[101];
	scanf("%s",&s);
	scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(i==a[j]){
			printf("\"");
			j++;
		}
		printf("%c",s[i]);
	}
	if(a[j]==len){
		printf("\"");
	}
		printf("\n");
	return 0;
} 