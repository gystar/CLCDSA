#include <stdio.h>

int  main(){
 int sum,n,i,a;
 sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
      scanf("%d",&a);
      sum+=(a-1);
  }
 printf("%d\n",sum);

 return 0;
} 