#include <stdio.h>
int main(void){
    int n,m,time,cnt=0,lb,ub,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
     int a[100000],b[100000];
    int i;
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++)scanf("%d",&b[i]);
    time=a[1]+x;
    lb=1;
    ub=1;
    while(1){
        if(b[m]<time)break;
        for(i=lb;i<=m;i++){
            if(time<=b[i]){
                time=b[i]+y;
                lb=i+1;
                break;
            }
        }
            cnt++;
            if(a[n]<time)break;
            for(i=ub;i<=n;i++){
                if(time<=a[i]){
                    time=a[i]+x;
                    ub=i+1;
                    break;
                }
            }
    }
    printf("%d\n",cnt);
    return 0;
} 