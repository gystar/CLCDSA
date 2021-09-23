#include<stdlib.h>
#include <stdio.h>
int compare(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}

int main()
{   int n;
    scanf("%d",&n);
    int a[n+1];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    a[n+1]=0;
    int ans=0,cnt=1;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }else if(cnt%2==1){
            ans++;
            cnt=1;
        }else{
            cnt=1;
        }
        
    }
    printf("%d",ans);

    return 0;
} 