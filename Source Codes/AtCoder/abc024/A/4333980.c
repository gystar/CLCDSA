#include<stdio.h>
int main (){
int a=0,b=0,c=0,k=0,x=0,y=0,sum=0;
scanf ("%d%d%d%d%d%d",&a,&b,&c,&k,&x,&y);
  if ((x+y)>k-1){
sum=(a*x)+(b*y)-((x+y)*c);
}
  else{
  sum=(a*x)+(b*y);
  }
  printf ("%d\n",sum);
return 0;
} 