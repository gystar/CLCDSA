#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#define inf (INT_MAX-1)
#define INF 9223372036854775807
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

double yakusuu(long long x){                //div[i]???
    double ans=1,b;
    int a;
    if(x==1) ans=1;
    else{
        b=x;
        a=(x-1)/2+1;
        if(x%2==1) ans=a/b;
        else ans=a/b;
        }
    return ans;
}


int main(void){
    int i,j,n=in();
    long long c[n],div[n];
    double ans=0,na=1,d;
    rep(i,n){
        c[i]=in();
    }
    sort(c,n);
    /*
    rep(i,n-1){
        na*=(1+i);
    }
     */
    rep(i,n){
        div[i]=0;
        rep(j,n){
            if(c[i]%c[j]==0) div[i]++;      //div[i]:c[i]?????(????)
        }
        ans+=yakusuu(div[i]);
    }
    dprint(ans);
    return 0;
} 