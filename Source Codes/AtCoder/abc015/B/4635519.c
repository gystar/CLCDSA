#include <stdio.h>
int main (){
int a,b,k,i,n=0,sum=0;
scanf ("%d",&k);
for (i=0;i<k;i++){
scanf ("%d",&b);
if (b!=0) {
  n++;
  sum=sum+b;
}
}
if (sum%n==0){
a=sum/n;
}
else {
a=sum/n+1;
}
printf ("%d\n",a);
return 0;
} 