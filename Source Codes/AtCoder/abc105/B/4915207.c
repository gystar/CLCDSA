#include <stdio.h>
int main(void){
   int i,N,cnt=0;
   
   scanf("%d",&N);
   
   for(i=0;i<=N/4;i++){
       if( ((N-4*i)%7) ==0)
       cnt++;
   }
      if(cnt>0)
      printf("Yes");
      else
      printf("No");
      
       return(0);
   } 