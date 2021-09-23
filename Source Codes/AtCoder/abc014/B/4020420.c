#include<stdio.h>
int A[20],B[20];
int main()
{
    int n,x,i,sum=0;
    scanf("%d%d",&n,&x);
    i=0;
    while(x!=0){
	B[i++]=x%2;
	x/=2;
    }
    for(i=0;i<n;i++){
	scanf("%d",&A[i]);
	if(B[i]) sum+=A[i];
    }
    printf("%d\n",sum);
    return 0;
} 