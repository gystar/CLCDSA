#include<stdio.h>
int MIN(int a,int b){return a<b?a:b;}
int MAX(int a,int b){return a<b?b:a;}
int main(){
	char s[100010];
	int i,l,min;
	scanf("%s",s);
	for(l=0;s[l];l++);
	min=l;
	for(i=1;i<l;i++){
		if(s[i]-s[i-1])min=MIN(min,MAX(i,l-i));
	}
	printf("%d\n",min);
	return 0;
} 