#include <stdio.h>
int main (){
int min=1000,a,i,b;
scanf ("%d",&b);
for (i=0;i<b;i++){
scanf ("%d",&a);
if (min>a){
min=a;
}
}
printf ("%d\n",min);
return 0;
} 