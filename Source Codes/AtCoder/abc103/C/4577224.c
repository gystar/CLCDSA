#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    long long sum=0;
    for(int i=0;i<n;i++)  {int t;scanf("%d",&t); sum+=t-1;}
    printf("%lld\n",sum);return 0;
} 