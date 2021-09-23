#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
  int n;
  int prices[110];
  scanf("%d",&n);
  for(int i=0; i<n; i++) {
    scanf("%d",&prices[i]);
  }
  
  //Bubblesort
  int flag,tmp,k;
  k=0;
  do {
    flag=0;
    for(int i=0; i<n-1-k; i++) {
      if(prices[i]>prices[i+1]) {
        flag=1;
        tmp=prices[i];
        prices[i]=prices[i+1];
        prices[i+1]=tmp;
      }
    }
    k++;
  } while(flag==1);
  
  for(int i=n-1; i>0; i--) {
    if(prices[i]!=prices[i-1]) {
      printf("%d\n",prices[i-1]);
      break;
    }
  }
  return 0;
} 