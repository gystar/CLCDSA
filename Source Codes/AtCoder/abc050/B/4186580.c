#include <stdio.h>
int arraySum(int a[],int n);
int main(void){
    int n;
    scanf("%d",&n);
    int t[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    int m;
    scanf("%d",&m);
    int p[m],x[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&p[i],&x[i]);
    }
    
    int sum = arraySum(t,n);
    for(int i=0;i<m;i++)
    {
        int tmp = p[i]-1;
        printf("%d\n",sum + x[i] - t[tmp]);
    }
    return 0;
}

int arraySum(int a[],int n){
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum;
} 