#include <stdio.h>
int main(){
int a,b,c,i;
scanf("%d%d%d",&a,&b,&c);
for(i=c; i<=c+a*b; i++){

if(i%a==0&&i%b==0){

printf("%d\n",i);

break;

}

}



return 0;
} 