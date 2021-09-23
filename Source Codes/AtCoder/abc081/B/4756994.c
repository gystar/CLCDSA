#include <stdio.h>
#include <string.h>
int main(){
  int a[250];
  int N,i,count=0,flag = 0;
  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
    //printf("%d ",a[i]);
  }
  //printf("\n");
  while(1){
  	for(i=0;i<N;i++){
      if(a[i]%2 != 0) flag=1;
   	 a[i] = a[i]/2;
   	 
     }
    if(flag == 1) break;
    count++;
  }
  
  printf("%d\n",count);
  return 0;
} 