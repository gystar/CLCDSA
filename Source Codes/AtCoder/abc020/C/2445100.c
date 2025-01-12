#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>    
#define inf (INT_MAX-1)
#define INF 9223372036854775807
#define EPS 1e-10
#define sq(n) ((n)*(n))
#define rep(i,n) for(i=0;i<n;i++)
#define rev(i,n) for(i=n-1;i>=0;i--)
#define sort(a,n) qsort(a,n,sizeof(TYPE),cmp)
#define sort_r(a,n) qsort(a,n,sizeof(TYPE),cmp_r);
#define chsort(s,n) qsort(s,n,sizeof(char),cmp)
#define chsort_r(s,n) qsort(s,n,sizeof(char),char_cmp_r);
#define TYPE long long
#define MEMSET(a) memset(a,0,sizeof(a))
const int mod=(int)1e09+7;

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
    return *(TYPE *)a-*(TYPE *)b;
}
int cmp_r(const void *a,const void *b){
    return *(TYPE *)b-*(TYPE *)a;
}
int char_cmp(const void *a,const void *b){
    return strcmp((char *)a,(char *)b);
}
int char_cmp_r(const void *a,const void *b){
    return strcmp((char *)b,(char *)a);
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
long long gcd(long long x,long long y){
    return x%y?gcd(y,x%y):y;
}
long long lcm(long long x,long long y){
    return x/gcd(x,y)*y;
}

// konoshita kara kaku
int h,w,t;
char s[100][101];

// N is the number of the vertexes
#define N 100
typedef struct{
    int x,y;
}queue;

int sx,sy,gx,gy;
long long g[N][N];

long long bfs(void){
    int head=0,teil=0,i;
    const int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
    queue q[100000];
    long long f[N][N];
    memset(f,-1,sizeof(f));
    q[head].y=sy;
    q[head].x=sx;
    f[sy][sx]=0;
    while(head<=teil){
        int ty=q[head].y;
        int tx=q[head].x;
        head++;
        for(i=0;i<4;i++){
            int ny=ty+dy[i];
            int nx=tx+dx[i];
            if(0<=ny&&ny<h&&0<=nx&&nx<w){
                if(f[ny][nx]==-1||f[ny][nx]>f[ty][tx]+g[ny][nx]){
                    f[ny][nx]=f[ty][tx]+g[ny][nx];
                    teil++;
                    q[teil].y=ny;
                    q[teil].x=nx;
                }
            }
        }
    }
    return f[gy][gx];
}

int bs(void){
    int l=0,r=t,m,ans=0,i,j;
    long long tmp;
    while(l<r){
        m=(l+r)/2;
        rep(i,h)rep(j,w){
            if(s[i][j]=='#')g[i][j]=m;
            else if(!(i==sy&&j==sx))g[i][j]=1;
        }
        tmp=bfs();
        if(tmp<=(long long)t){
            l=m+1;
            ans=max(ans,m);
        }
        else r=m;
    }
    return ans;
}

int main(void){
    int i,j;
    h=in(),w=in(),t=in();
    rep(i,h)chin(s[i]);
    rep(i,h)rep(j,w){
        if(s[i][j]=='S'){sy=i,sx=j;}
        if(s[i][j]=='G'){gy=i,gx=j;}
    }
    print(bs());
    return 0;
} 