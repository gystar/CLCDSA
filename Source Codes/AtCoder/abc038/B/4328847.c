#include <stdio.h>
int main (){
int a,b,x,y,k=0;
scanf ("%d%d%d%d",&a,&b,&x,&y);
if (a==x || b==x || a==y || b==y){
k=1;
}
  if (k==1){
  printf ("YES\n");
  }
  else {
  printf ("NO\n");
  }
return 0;
} 