#include<stdio.h>
int L[201];
int main()
{
    int i,j,N,tmp;
    int sum=0;
    scanf("%d",&N);
    for(i=0; i<2*N; i++)
        scanf("%d",&L[i]);
    for(i=0; i<2*N; i++){
        for(j=i+1; j<2*N; j++){
            if(L[i]>L[j])
            {
                tmp=L[i];
                L[i]=L[j];
                L[j]=tmp;
            }
        }
        if(i%2==0)
            sum+=L[i];
    }
    printf("%d\n",sum);
    return 0;
} 