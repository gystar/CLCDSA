#include<stdio.h>
int main(void){
    long long R,B,x,y,p,q,w;
    scanf("%lld%lld",&R,&B);
    scanf("%lld%lld",&x,&y);
    p = 0;
    if(R < B){
        q = R;
    }else{
        q =B;
    }
    while(1){
        if(p == q){
            if((R - p) / (x - 1) + (B - p) / (y - 1) >= p){
                break;
            }else{
                p--;
                break;
            }
        }
        w = (p + q) / 2;
        if((R - w) / (x - 1) + (B - w) / (y - 1) >= w){
            p = w + 1;
        }else{
            q = w;
        }
    }
    printf("%lld\n",p);
    return 0;
} 