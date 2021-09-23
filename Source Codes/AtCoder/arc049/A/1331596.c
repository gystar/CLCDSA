#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>	
#define inf INT_MAX
#define INF 9223372036854775807
#define rep(i,n) for(i=0;i<n;i++)

int in(void){
	int i;scanf("%d",&i);
	return i;
}
long long llin(void){
	long long i;scanf("%lld",&i);
	return i;
}
void chin(char s[]){
	scanf("%s",s);
}
void print(int a){
	printf("%d\n",a);
}
void llprint(long long a){
	printf("%lld\n",a);
}
void print2(int a,int b){
	printf("%d %d\n",a,b);
}
long long max(long long a,long long b){
	return a>b?a:b;
}
long long min(long long a,long long b){
	return a<b?a:b;
}

int main(void){
	char s[101];
	chin(s);
	int i,a=in(),b=in(),c=in(),d=in();
	rep(i,strlen(s)){
		if(i==a||i==b||i==c||i==d){
			putchar('"');
		}
		putchar(s[i]);
	}
	if(i==d){
		putchar('"');
	}
	puts("");
	return 0;
} 