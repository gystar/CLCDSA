#include <stdio.h>
int main (){
int i,j,a,b,min=1000,max=0;
  scanf ("%d",&j);
  for (i=0;i<j;i++){
  scanf ("%d",&a);
    if(max<a){
    max=a;
    }
    if(min>a){
    min=a;
    }
  }
  printf ("%d",max-min);
return 0;
} 