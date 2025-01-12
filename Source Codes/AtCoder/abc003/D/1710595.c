//ABC003-D
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define inf 1072114514
#define llinf 4154118101919364364
#define mod 1000000007

int max(int a,int b){if(a>b){return a;}return b;}
int min(int a,int b){if(a<b){return a;}return b;}
int zt(int a,int b){return max(a,b)-min(a,b);}
int round(int a,int b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
int ceil(int a,int b){if(a%b==0){return a/b;}return (a/b)+1;}
int gcd(int a,int b){int c;while(b!=0){c=a%b;a=b;b=c;}return a;}
int lcm(int a,int b){int c=gcd(a,b);a/=c;return a*b;}
int nCr(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=(a+1-i);r/=i;}return r;}
int fact(int a){int i,r=1;for(i=1;i<=a;i++){r*=i;}return r;}
int pow(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
long long llmax(long long a,long long b){if(a>b){return a;}return b;}
long long llmin(long long a,long long b){if(a<b){return a;}return b;}
long long llzt(long long a,long long b){return llmax(a,b)-llmin(a,b);}
long long llround(long long a,long long b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
long long llceil(long long a,long long b){if(a%b==0){return a/b;}return (a/b)+1;}
long long llgcd(long long a,long long b){long long c;while(b!=0){c=a%b;a=b;b=c;}return a;}
long long lllcm(long long a,long long b){long long c=llgcd(a,b);a/=c;return a*b;}
long long llnCr(long long a,long long b){long long i,r=1;for(i=1;i<=b;i++){r*=(a+1-i);r/=i;}return r;}
long long llfact(long long a){long long i,r=1;for(i=1;i<=a;i++){r*=i;}return r;}
long long llpow(long long a,long long b){long long i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
double dbmax(double a,double b){if(a>b){return a;}return b;}
double dbmin(double a,double b){if(a<b){return a;}return b;}
double dbzt(double a,double b){return dbmax(a,b)-dbmin(a,b);}
int sortfncsj(const void *a,const void *b){if(*(int *)a>*(int *)b){return 1;}if(*(int *)a==*(int *)b){return 0;}return -1;}
int sortfnckj(const void *a,const void *b){if(*(int *)a<*(int *)b){return 1;}if(*(int *)a==*(int *)b){return 0;}return -1;}
int llsortfncsj(const void *a,const void *b){if(*(long long *)a>*(long long *)b){return 1;}if(*(long long *)a==*(long long *)b){return 0;}return -1;}
int llsortfnckj(const void *a,const void *b){if(*(long long *)a<*(long long *)b){return 1;}if(*(long long *)a==*(long long *)b){return 0;}return -1;}
int dbsortfncsj(const void *a,const void *b){if(*(double *)a>*(double *)b){return 1;}if(*(double *)a==*(double *)b){return 0;}return -1;}
int dbsortfnckj(const void *a,const void *b){if(*(double *)a<*(double *)b){return 1;}if(*(double *)a==*(double *)b){return 0;}return -1;}

long long factorial[131072];

void cfact(){
    long long i;
    factorial[0]=1;
    factorial[1]=1;
    for(i=2;i<131072;i++){
        factorial[i]=factorial[i-1]*i;
        factorial[i]%=mod;
    }
}

long long power(long long a, long long b){
	long long x = 1, y = a;
	while (b > 0){
		if(b%2){
			x = (x*y)%mod;
		}
		y = (y*y)%mod;
		b /= 2;
	}
	return x%mod;
}	
 
long long modular_inverse(long long n){
	return power(n, mod-2);
}

long long calcnCr(long long n,long long k){
	return (factorial[n]*(modular_inverse(factorial[k])*modular_inverse(factorial[n-k])%mod))%mod;
}

int main(void){
    long long r,c,x,y,d,l,res1,res2,t;
    scanf("%lld%lld%lld%lld%lld%lld",&r,&c,&x,&y,&d,&l);
    res1=(r-x+1)*(c-y+1);
    cfact();
    if(x*y==d+l){
        res2=calcnCr(x*y,d);
    }
    else{
        res2=(calcnCr(x*y,d)*calcnCr(x*y-d,l))%mod;
        //printf("%lld\n",res2);
        res2+=(mod*10ll);
        //printf("%lld\n",res2);
        if(x>1&&y>0){
            t=(x-1)*y;
            if(t>=d+l){res2-=(2*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        //printf("%lld\n",res2);
        if(x>0&&y>1){
            t=x*(y-1);
            if(t>=d+l){res2-=(2ll*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        if(x>2&&y>0){
            t=(x-2)*y;
            if(t>=d+l){res2+=(1ll*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        if(x>0&&y>2){
            t=x*(y-2);
            if(t>=d+l){res2+=(1ll*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        if(x>1&&y>1){
            t=(x-1)*(y-1);
            if(t>=d+l){res2+=(4ll*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        if(x>2&&y>1){
            t=(x-2)*(y-1);
            if(t>=d+l){res2-=(2ll*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        if(x>1&&y>2){
            t=(x-1)*(y-2);
            if(t>=d+l){res2-=(2ll*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        if(x>2&&y>2){
            t=(x-2)*(y-2);
            if(t>=d+l){res2+=(1ll*((calcnCr(t,d)*calcnCr(t-d,l))%mod));}
        }
        res2%=mod;
    }
    printf("%lld\n",(res1*res2)%mod);
    return 0;
} ./Main.c:12:5: warning: conflicting types for built-in function �round�
 int round(int a,int b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
     ^
./Main.c:13:5: warning: conflicting types for built-in function �ceil�
 int ceil(int a,int b){if(a%b==0){return a/b;}return (a/b)+1;}
     ^
./Main.c:18:5: warning: conflicting types for built-in function �pow�
 int pow(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
     ^
./Main.c:22:11: warning: conflicting types for built-in function �llround�
 long long llround(long long a,long long b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
           ^
