#include <stdio.h>

int main(void){
    int n;
    double ans=0;
    scanf("%d",&n);
    int c[n];
    for (int i=0; i<n; i++){
        scanf("%d",&c[i]);
    }
    for (int i=0; i<n; i++){
        int count=0;
        for (int j=0; j<n; j++){
            if (c[i]%c[j]==0 && c[i]>=c[j] && i!=j){
                count++;
            }   
        }
        if (count%2!=0){
            ans+=(double)1/(double)2;
        } else{
            ans+=((double)count+2)/((double)count*2+2);
        }
    }
    printf("%.6f\n",ans);
    return 0;
} 