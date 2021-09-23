#include <stdio.h>
int main(){
int n,i;
scanf ("%d",&n);
for (i=0;i<40000;i++){
if (i*i>n){
break;
}
}
printf ("%d",(i-1)*(i-1));
return 0;
} 