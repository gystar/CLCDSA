#include<stdio.h>
#include<math.h>

int main(void){
    int n,k,all=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                int u=a[j];
                a[j]=a[j+1];
                a[j+1]=u;
            }
        }
    }

    for(int i=0;i<k;i++){
        all=all+a[i];
    }

    printf("%d",all);
    return 0;
} 