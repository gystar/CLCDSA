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
#define N 4

int main(void){
	int a[N][N],i,j,f=0;
	rep(i,N){
		rep(j,N){
			a[i][j]=in();
		}
	}
	rep(i,N){
		rep(j,N-1){
			if(a[i][j]==a[i][j+1]){
				puts("CONTINUE");
				return 0;
			}
		}
	}
	rep(i,N-1){
		rep(j,N){
			if(a[i][j]==a[i+1][j]){
				puts("CONTINUE");
				return 0;
			}
		}
	}
	puts("GAMEOVER");
	return 0;
} 