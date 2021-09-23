#include<stdio.h>
 
 int main(void){
 int n,t[100],i,j,temp;
 scanf("%d",&n);
 for(i=0;i<n;i++){
     scanf("%d",&t[i]);
     }
 for(i=0;i<n;i++){
  for(j=n-1;j>i;j--){
      if(t[j]<t[j-1]){
      temp=t[j-1];
      t[j-1]=t[j];
      t[j]=temp;
      }
     }
   }
   printf("%d\n",t[0]);
   return 0;
 } 