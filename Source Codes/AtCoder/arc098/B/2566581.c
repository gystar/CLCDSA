#include <stdio.h>




int main(void){
    int N;
    scanf("%d",&N);
    long long int A[N];
    for(int i=0;i<N;i++)scanf("%lld",&A[i]);
    int l=0;
    int r=0;
    long long int Xo=A[0];
    long long int Pl=A[0];
    long long int ans=0;
    while(1){
        if(Xo==Pl){ans+=l-r+1;l++;
            if(l>=N)break;
        else {
            Xo^=A[l];
            Pl+=A[l];
        }
        }
        else {
            Xo^=A[r];
            Pl-=A[r];
            r++;
        }
        
    }
    printf("%lld",ans);
    
    return 0;
} 