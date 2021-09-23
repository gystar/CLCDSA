#include<stdio.h>
int main (){
char a[5];
  int b,c,d;
  scanf ("%s",a);
  scanf ("%d",&b);
  b--;
  c=b/5;
  d=b-(c*5);
  printf ("%c%c\n",a[c],a[d]);
return 0;
} 