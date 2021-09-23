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
        double count=-1;
        for (int j=0; j<n; j++){
            if (c[i]%c[j]==0){
                count++;
            }   
        }
        if ((int)count%2!=0){
            ans+=0.5;
        } else{
            ans+=(count+2)/(count*2+2);
        }
    }
    printf("%.6f\n",ans);
    return 0;
} 