//2-Dimensions Cumulative Sum(Ruiseki-Wa)
//ARC089-D
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
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
int strsortfncsj(const void *a,const void *b){return strcmp((char *)a,(char *)b);}
int strsortfnckj(const void *a,const void *b){return strcmp((char *)b,(char *)a);}
 
int bsum[2048][2048]={0};
int wsum[2048][2048]={0};
 
int cbz(int fx,int fy,int tx,int ty){
    if(fx>tx || fy>ty){return 0;}
    if(fx==0 && fy == 0){return bsum[tx][ty];}
    else if(fx==0){
        return bsum[tx][ty]-bsum[tx][fy-1];
    }
    else if(fy==0){
        return bsum[tx][ty]-bsum[fx-1][ty];
    }
    else{
        return bsum[tx][ty]-bsum[tx][fy-1]-bsum[fx-1][ty]+bsum[fx-1][fy-1];
    }
}
 
int cwz(int fx,int fy,int tx,int ty){
    if(fx>tx || fy>ty){return 0;}
    if(fx==0 && fy == 0){return wsum[tx][ty];}
    else if(fx==0){
        return wsum[tx][ty]-wsum[tx][fy-1];
    }
    else if(fy==0){
        return wsum[tx][ty]-wsum[fx-1][ty];
    }
    else{
        return wsum[tx][ty]-wsum[tx][fy-1]-wsum[fx-1][ty]+wsum[fx-1][fy-1];
    }
}
 
int main(void){
    int i,j,n,k,dk,x,y,r=0,l,kr,h,w;
    int bf[2048][2048]={0};
    int wf[2048][2048]={0};
    double d;
    char s[262144],c[2];
    scanf("%d%d",&h,&w);
    //l=strlen(s);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
        scanf("%d",&k);
        if((i+j)%2==0){bf[i][j]+=k;}
        else{wf[i][j]+=k;}
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(j==0){
                bsum[i][j]=bf[i][j];
                wsum[i][j]=wf[i][j];
            }
            else{
                bsum[i][j]=bsum[i][j-1]+bf[i][j];
                wsum[i][j]=wsum[i][j-1]+wf[i][j];
            }
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(i!=0){
                bsum[i][j]=bsum[i-1][j]+bsum[i][j];
                wsum[i][j]=wsum[i-1][j]+wsum[i][j];
            }
        }
    }
    for(i=0;i<h;i++){
        for(j=i;j<h;j++){
            for(k=0;k<w;k++){
                for(l=k;l<w;l++){
                    if(cbz(i,k,j,l) == cwz(i,k,j,l)){
                        r=max(r,(j-i+1)*(l-k+1));
                    }
                }
            }
        }
    }
    printf("%d\n",r);
    return 0;
} ./Main.c:15:5: warning: conflicting types for built-in function �round�
 int round(int a,int b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
     ^
./Main.c:16:5: warning: conflicting types for built-in function �ceil�
 int ceil(int a,int b){if(a%b==0){return a/b;}return (a/b)+1;}
     ^
./Main.c:21:5: warning: conflicting types for built-in function �pow�
 int pow(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
     ^
./Main.c:25:11: warning: conflicting types for built-in function �llround�
 long long llround(long long a,long long b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
           ^
