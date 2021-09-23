#include<stdio.h>

int main(){
    int num,i,sum=0;
    int  flow[9];

    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&flow[i]);
    }
    for(i=0;i<num;i++){
        if(flow[i]%2==0){
            sum++;
            flow[i]-=1;
        }
        switch (flow[i])
        {
            case 2:
                sum++;
                break;
            case 5:
                sum+=2;
                break;
            case 8:
                sum++;
                break;
            default:
                break;
        }
    }
    printf("%d\n",sum);
    return 0;
} 