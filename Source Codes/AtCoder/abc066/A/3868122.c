#include <stdio.h>
int main (){
int a,b,c;
scanf ("%d%d%d",&a,&b,&c);
if (a<c & b<c){
printf ("%d",a+b);
}
  else {
  if (a>b){
  printf ("%d",c+b);
  }
    else{
    printf ("%d",a+c);
    }
  }
return 0;
} 