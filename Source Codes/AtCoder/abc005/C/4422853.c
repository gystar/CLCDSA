#include <stdio.h>
int main(void){
    int t,n,m,i,j;
    scanf("%d",&t);
    scanf("%d",&n);
    int f[n];
    
    for(i=0;i<n;i++){
         scanf("%d ",&f[i]);
    }
    
    scanf("%d",&m);
    int c[m];
    
    for(i=0;i<m;i++){
         scanf("%d ",&c[i]);
    }
    
    for(i=0;i<m;i++){
         
         for(j=0;j<n;j++){
              if(f[j]<=c[i] && c[i]<=f[j]+t){
                   f[j] = 201;
                   break;
              }
         }
         
         if(j==n){
              printf("no\n");
              break;
         }
         
         if(i==m-1){
              printf("yes\n");
         }
    }
    
} 