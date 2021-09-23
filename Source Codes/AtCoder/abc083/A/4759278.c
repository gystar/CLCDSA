#include <stdio.h>

int main(){
  int a[5];
  int sumA,sumB,i=0;
  while(i<4){
  	scanf("%d",&a[i]);
    i++;
  }
  sumA = a[0]+a[1];
  sumB = a[2]+a[3];
  
  if(sumA > sumB) printf("Left\n");
  else if(sumA < sumB) printf("Right\n");
  else printf("Balanced");
  return 0;
} 