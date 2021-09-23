#include <stdio.h>
int main (){
int n,a=0,b,i;
scanf ("%d",&n);
for (a;a<n;a++){   
b=a*a*a*a;
if (n==b){
break;
}
}
printf ("%d",a);
return 0;
} 