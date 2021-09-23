#include <stdio.h>
int main(void){
   int N,i=0,x,sum=0,MAX,temp;
   int L[15];
   scanf("%d",&N);
   temp=N;
   for(;N--;){
       scanf("%d",&x);
          i++;
       L[i]=x;
   }
   
   N=temp;
   MAX=L[1];
    for(i=1;i<=N;i++){
        sum+=L[i];
    if(MAX<L[i])
    MAX=L[i];
}

    sum=sum-MAX;
if(MAX<sum)
printf("Yes");
else
printf("No");


return(0);
} 