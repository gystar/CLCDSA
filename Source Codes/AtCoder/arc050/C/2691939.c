//set many funcs template
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#define inf 1072114514
#define llinf 4154118101919364364
#define pi 3.1415926535897932384

int max(int a,int b){if(a>b){return a;}return b;}
int min(int a,int b){if(a<b){return a;}return b;}
int zt(int a,int b){return max(a,b)-min(a,b);}
int round(int a,int b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
int ceil(int a,int b){if(a%b==0){return a/b;}return (a/b)+1;}
int gcd(int a,int b){int c;while(b!=0){c=a%b;a=b;b=c;}return a;}
int lcm(int a,int b){int c=gcd(a,b);a/=c;return a*b;}
int nCr(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=(a+1-i);r/=i;}return r;}
int nHr(int a,int b){return nCr(a+b-1,b);}
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
long long llnHr(long long a,long long b){return llnCr(a+b-1,b);}
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
int strsortfncsj(const void *a,const void *b){return strcmp((char *)a,(char *)b);}
int strsortfnckj(const void *a,const void *b){return strcmp((char *)b,(char *)a);}

long long power(long long a, long long b,long long mod){
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
 
long long modular_inverse(long long n,long long mod){
	return power(n,mod-2,mod);
}

void shuffledget(int x[],int n){
    srand(time(0));
    int i,b[524288],p,c;
    for(i=0;i<n;i++){
        b[i]=i;
    }
    for(i=n;i>=1;i--){
        p=rand()%i;
        c=b[i-1];b[i-1]=b[p];b[p]=c;
    }
    for(i=0;i<n;i++){
        scanf("%d",&x[b[i]]);
    }
}

void prodmat(long long mat[2][2],long long mat2[2][2],long long m){
	  long long r[2][2]={0},i,j,k,l;
		r[0][0]=mat[0][0]*mat2[0][0];r[0][0]%=m;
		r[0][0]+=mat[0][1]*mat2[1][0];r[0][0]%=m;
		r[0][1]=mat[0][0]*mat2[0][1];r[0][1]%=m;
		r[0][1]+=mat[0][1]*mat2[1][1];r[0][1]%=m;
		r[1][0]=mat[1][0]*mat2[0][0];r[1][0]%=m;
		r[1][0]+=mat[1][1]*mat2[1][0];r[1][0]%=m;
		r[1][1]=mat[1][0]*mat2[0][1];r[1][1]%=m;
		r[1][1]+=mat[1][1]*mat2[1][1];r[1][1]%=m;		
    for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				mat[i][j]=r[i][j];
			}
		}
}

void powmat(long long mat[2][2],long long n,long long m){
	long long r[2][2]={0},i,j;
	r[0][0]=1;r[1][1]=1;
	while(n){
		if(n%2){prodmat(r,mat,m);}
		prodmat(mat,mat,m);
		n/=2;
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mat[i][j]=r[i][j];
		}
	}
}

int main(void){
    long long i,j,n,m,k,a,b,c,w,r,l,t;
    long long x,y,z,mat[2][2];
    double d;
    char s[524288];
    scanf("%lld%lld%lld",&a,&b,&m);
    c=llgcd(a,b);
		mat[0][0]=10;
		mat[0][1]=1;
		mat[1][0]=0;
		mat[1][1]=1;
		powmat(mat,a-1,m);
		r=mat[0][0]+mat[0][1];r%=m;
		mat[0][0]=power(10,c,m);
		mat[0][1]=1;
		mat[1][0]=0;
		mat[1][1]=1;
		powmat(mat,(b/c)-1,m);
		t=mat[0][0]+mat[0][1];t%=m;
    //l=strlen(s);
    //for(i=0;i<n;i++){scanf("%d",&a[i]);}
    //shuffledget(a,n);
    //qsort(a,n,sizeof(int),sortfncsj);
    printf("%lld\n",(r*t)%m);
    return 0;
} ./Main.c:14:5: warning: conflicting types for built-in function �round�
 int round(int a,int b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
     ^
./Main.c:15:5: warning: conflicting types for built-in function �ceil�
 int ceil(int a,int b){if(a%b==0){return a/b;}return (a/b)+1;}
     ^
./Main.c:21:5: warning: conflicting types for built-in function �pow�
 int pow(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
     ^
./Main.c:25:11: warning: conflicting types for built-in function �llround�
 long long llround(long long a,long long b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
           ^
