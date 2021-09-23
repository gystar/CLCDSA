#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int euc(int a,int b){
    int tmp;
     if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 int r;
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  
  return b;

}

int main()
{
    long long a,b,n,m,k,i=1,j,l,ans=-1;
    char s[100001],t[100001];
    scanf("%d%d",&n,&m);
    scanf("%s",s);
    scanf("%s",t);
    k=euc(n,m);
    ans=n/k*m;
    for(i=0;i<k;i++){
        if(s[n*i/k]!=t[m*i/k]){
            ans=-1;
        }
    }
       printf("%lld",ans);
    
    return 0;
} 