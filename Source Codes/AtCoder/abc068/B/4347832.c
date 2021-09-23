#include<stdio.h>

int main(){
  int N;
  int i,j,k,max=0,maxk=0;
  
  scanf("%d",&N);
  
  for(i=1;i<=N;i++){
    k=0;
    j=i;
    while(1){
      if(j%2 ==1)
        break;
      j/=2;
      k++;
    }
    if(maxk <= k){
      max = i;
      maxk=k;
    }
  }
  
  printf("%d\n",max);
  return 0;
} 