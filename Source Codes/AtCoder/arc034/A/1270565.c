#include <stdio.h>
int main(){
int N,a,b,c,d,i;
double e,max=0,sum;
scanf("%d",&N);
for(i=1;i<=N;i++){
    scanf("%d %d %d %d %lf",&a,&b,&c,&d,&e);
     sum= a+b+c+d+e*110/900;
    if (sum>max)max=sum;
}
printf("%f\n",max);
return 0;
} 