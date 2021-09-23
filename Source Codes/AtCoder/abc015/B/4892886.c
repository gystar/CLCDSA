#include<stdio.h>
 int main(){
     int N,i,j,count=0,ans;
     int sum = 0;
    
     scanf("%d",&N);
     for(i=0;i<N;i++){
        scanf("%d",&j);
        if(j!=0){
            sum += j;
            count++;
        }
     }
      if(sum%count!=0) ans = sum / count + 1;
      else ans = sum/count;
      printf("%d\n",ans);

      return 0;  
 } 