#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
     long long int A,B;
    scanf("%lld%lld",&A,&B);
    if(A*B>0)printf("%lld\n",abs(A-B));
    else printf("%lld\n",abs(A-B)-1);
return 0; 
} 