#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  double c=pow(2,2.0/3.0);
  double x,P,ans;
  char str[255];

  fgets(str,sizeof(str),stdin);
  P=atof(str);
  x=log(P*log(c))/log(c);

  if( x<0 ){
    printf("%.10f\n",P);
  }else{
    ans=x+P/pow(c,x);
    printf("%.10f\n",ans);
  }
  return 0;
} 