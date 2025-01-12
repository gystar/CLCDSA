//set many funcs template
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#define inf 1072114514
#define llinf 4154118101919364364
#define mod 1000000007
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

int main(void){
    int i,j,n,m,k,a,b,c,w,r=0,l,t,dn,dm,fl;
    double d;
    char s[1024][1024]={0};
    scanf("%d%d%d%d",&n,&m,&a,&b);
    //l=strlen(s);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){s[i][j]='.';}
    }
    if(n%2){
        for(i=0;i<m;i+=2){
            if(a==0 || i+1>=m){break;}
            a--;
            s[n-1][i]='<';
            s[n-1][i+1]='>';
        }
    }
    if(m%2){
        for(i=0;i<n;i+=2){
            if(b==0 || i+1>=n){break;}
            b--;
            s[i][m-1]='^';
            s[i+1][m-1]='v';
        }
    }
    dn=(n/2)*2;
    dm=(m/2)*2;
    //if((dn*dm)/4<a+b){printf("NO\n");return 0;}
    for(i=0;i<dn;i+=2){
        for(j=0;j<dm;j+=2){fl=0;
            if(a>1){
            s[i][j]='<';
            s[i][j+1]='>';a--;
            s[i+1][j]='<';
            s[i+1][j+1]='>';a--;
            }
            else if(b>1){
            s[i][j]='^';
            s[i+1][j]='v';b--;
            s[i][j+1]='^';
            s[i+1][j+1]='v';b--;
            }
            else if(a>0){
            s[i][j]='<';
            s[i][j+1]='>';a--;fl=1;
            }
            else if(b>0){
            s[i][j]='^';
            s[i+1][j]='v';b--;
            }
        }
    }
    if(a>0||b>0){
        if(n%2==1 && m%2==1 && fl==1){
           s[n-3][m-3]='<';s[n-3][m-2]='>';s[n-3][m-1]='^';
           s[n-2][m-3]='^';s[n-2][m-2]='.';s[n-2][m-1]='v';
           s[n-1][m-3]='v';s[n-1][m-2]='<';s[n-1][m-1]='>';
        }
        else{printf("NO\n");return 0;}
    }
    printf("YES\n");
    for(i=0;i<n;i++){printf("%s\n",s[i]);}
    return 0;
} ./Main.c:15:5: warning: conflicting types for built-in function �round�
 int round(int a,int b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
     ^
./Main.c:16:5: warning: conflicting types for built-in function �ceil�
 int ceil(int a,int b){if(a%b==0){return a/b;}return (a/b)+1;}
     ^
./Main.c:22:5: warning: conflicting types for built-in function �pow�
 int pow(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
     ^
./Main.c:26:11: warning: conflicting types for built-in function �llround�
 long long llround(long long a,long long b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
           ^
