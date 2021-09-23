#include<stdio.h>
int main(void)
{
    int i,N,num,num_4=0,num_1=0,num_2=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num);
        if(num%4==0)
            num_4+=1;
        else if(num%2==0)
            num_2+=1;
        else
            num_1+=1;
    }
        if(num_4+1>=num_1&&num_2==0)
            printf("Yes\n");
        else if(num_4>=num_1&&num_2!=0)
            printf("Yes\n");
        else    printf("No\n");
    return 0;
} 