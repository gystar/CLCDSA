#include<stdio.h>

int main(void){
 int five=0;
  int hund=0;
  int ten=0;
  int price;
  int count=0;
  int nfive,nhund,nten;
  scanf("%d",&nfive);
  scanf("%d",&nhund);
  scanf("%d",&nten);
  scanf("%d",&price);
  
  for(five=0;five<=nfive;five++){
    for(hund=0;hund<=nhund;hund++){
      for(ten=0;ten<=nten;ten++){
        if(five*500+hund*100+ten*50==price)count++;
      }
    }
  }
  printf("%d",count);
  
} 