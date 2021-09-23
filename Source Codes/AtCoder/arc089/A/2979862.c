#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    int t[100005],x[100005],y[100005];
    int can=1;
    scanf("%d",&n);
    t[0]=0,x[0]=0,y[0]=0;
    for(int i=1; i<=n; i++){
        scanf("%d%d%d",&t[i],&x[i],&y[i]);
    }

    for(int i=1; i<=n; i++){
        if((t[i]-t[i-1]) < (abs(x[i]-x[i-1])+abs(y[i]-y[i-1]))){
            can=0;
            break;
        }
        if((t[i]-t[i-1])%2 != (abs(x[i]-x[i-1]+abs(y[i]-y[i-1])))%2 ){
            can=0;
            break;
        }
    }
    if(can)printf("Yes\n");
    else printf("No\n");
    return 0;
} 