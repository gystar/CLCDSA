#include<stdio.h>

int main(){
int n,i,sum=0;scanf("%d",&n);
char s[1000][21];
int a[1000];
for(i=0;i<n;i++){
scanf("%s %d",s[i],&a[i]);
sum+=a[i];
}
for(i=0;i<n;i++){
if(sum/2<a[i]){
printf("%s\n",s[i]);
return 0;
}
}
puts("atcoder");
return 0;
} 