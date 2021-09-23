#include<stdio.h>
int main(void){
int n, m, a, b, i, flag=1;
int c[100]={0};
scanf("%d%d%d%d",&n,&m,&a,&b);
 
for(i=0;i<m;i++){
scanf("%d",&c[i]);
}
for(i=0;i<m;i++){
 if(n<=a){
  n+=b;
 }
 
 n-=c[i];
 if(n<0){
  flag=0;
  break;
 }
}
if(flag)
 printf("complete\n");
else
 printf("%d\n",i+1);
return 0;} 