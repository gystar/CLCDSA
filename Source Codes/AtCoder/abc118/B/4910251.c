#include <stdio.h>
int main(void){
   int M,N,fcnt[30],K[30],A[30][30],x,i,j,k,cnt=0;
   scanf("%d %d",&N,&M);
   /* ??? */
   for(j=0;j<N;j++){
   for(i=0;i<M;i++){
   K[i]=A[i][j]=fcnt[i]=0;
   }
   }
   
    for(i=0;i<N;i++){
       scanf("%d",&K[i]);
       for(j=0;j<K[i];j++){
       scanf("%d",&x);
       A[i][j]=x;
       }
    }
    
    for(k=0;k<M;k++){
        for(i=0;i<N;i++){
            for(j=0;j<K[i];j++){
             if(A[i][j]==k+1)
             fcnt[k]++;
            }
         }
         if(fcnt[k]==N)
         cnt++;
    }
    
  printf("%d",cnt);
   
   return(0);
} 