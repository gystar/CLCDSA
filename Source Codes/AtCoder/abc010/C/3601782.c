#include <stdio.h>
#include <math.h>
int main()
{   int flag=0,txa,txb,tya,tyb,t,v,i,n,x[1001],y[1001];
    float doubt;
    scanf("%d%d%d%d%d%d%d",&txa,&tya,&txb,&tyb,&t,&v,&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
        doubt=sqrt(pow(txa-x[i],2)+pow(tya-y[i],2))+sqrt(pow(tyb-y[i],2)+pow(txb-x[i],2));
        if(doubt<=t*v){
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
} 