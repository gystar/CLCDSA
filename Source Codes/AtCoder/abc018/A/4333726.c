#include <stdio.h>
int main (){
int a,b,c,d,e,f;
  scanf ("%d%d%d",&a,&b,&c);
  if (a>b && a>c){
  d=1;
    if (b>c){
    e=2;
    f=3;
    }
    else{
    e=3;
    f=2;
    }
  }
  else {
  if (b>c){
  e=1;
    if(a>c){
    d=2;
    f=3;
    }
    else {
    d=3;
    f=2;
    }
  }
  else{
  f=1;
    if(a>b){
    d=2;
    e=3;
    }
    else {
    d=3;
    e=2;
    }
  }
  } 
  printf ("%d\n%d\n%d\n",d,e,f);
return 0;
} 