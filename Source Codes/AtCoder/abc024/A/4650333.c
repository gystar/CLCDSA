#include<stdio.h>
int main(){
    int child,adult,num,sale,small,big,sum = 0;
    scanf("%d%d%d%d%d%d",&child,&adult,&sale,&num,&small,&big);
    if(small+big >= num){
        sum = child*small+adult*big-sale*(small+big);
    }else{
        sum = child*small+adult*big;
    }
    printf("%d\n",sum);
    return 0;
} 