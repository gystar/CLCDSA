#include <stdio.h>
#include <stdlib.h>
int main (){
int a,b,c,k;
 scanf ("%d%d%d",&a,&b,&c);
k= abs( b-c );
if (a<k){
printf ("%d",k-a);
}
  else{
  printf ("0");
  }
  return 0;
} 