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

int main(void){
	int e[6],b,l[6],i,j,f=0,c=0,t[]={0,0,0,5,4,3,1};
	rep(i,6){
		e[i]=in();
	}
	b=in();
	rep(i,6){
		l[i]=in();
	}
	rep(i,6){
		rep(j,6){
			if(l[i]==e[j]){
				c++;
			}
		}
		if(l[i]==b){
			f=1;
		}
	}
	if(c==5&&f){
		puts("2");
	}
	else{
		print(t[c]);
	}
	return 0;
} 