#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>	
#define inf INT_MAX
#define INF 9223372036854775807
#define sq(n) ((n)*(n))
#define rep(i,n) for(i=0;i<n;i++)

int in(void){
	int i;scanf("%d",&i);
	return i;
}
long long llin(void){
	long long i;scanf("%lld",&i);
	return i;
}
double din(void){
	double i;scanf("%lf",&i);
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
void dprint(double a){
	printf("%.10f\n",a);
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
double dmax(double a,double b){
	return a>b?a:b;
}
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}

int main(void){
	int l=in(),r=in(),i,j,a[100],b[100],ans=0;
	rep(i,l){
		a[i]=in();
	}
	rep(i,r){
		b[i]=in();
	}
	rep(i,l){
		rep(j,r){
			if(a[i]==b[j]){
				ans++;
				b[j]=0;
				break;
			}
		}
	}
	print(ans);
	return 0;
} 