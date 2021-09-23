#include <stdio.h>
#include <math.h>
int main (){
int a[21],b[21],k,i,n,sum=0;
scanf ("%d%d",&k,&n);
for (i=0;i<k;i++){
scanf ("%d",&b[i]);
}
for (i=k-1;i>-1;i--){
if (n-(pow(2,i))>=0){
sum=sum+b[i];
n=n-(pow(2,i));
}
}
printf ("%d\n",sum);
return 0;
} 