#include <stdio.h>

int main(){
  int i,N,T[101],min;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&T[i]);
    if(i==0){
      min=T[i];
    }else{
      if(min>T[i])min=T[i];
    }
  }
  printf("%d\n",min);
} 