#include <stdlib.h>
#include <stdio.h>
int compare(const void *a,const  void*b){
    if(*(int *)a>*(int *)b)return 1;
    return -1;
}
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    long long sub=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sub+=a[i];
    }
    qsort(a,n,sizeof(int),compare);
    int ans=1;
    for(int i=n-1;i>=0;i--){
        sub-=a[i];
        if(a[i]>2*sub){
            break;
        }else{
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
} 