#include<stdio.h>
#include<string.h>

int main(){
	char a[100000];
	int res=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a)-1;i++){
		if(a[i]!=a[i+1]){
			res++;
		}
	}
	printf("%d",res);
} 