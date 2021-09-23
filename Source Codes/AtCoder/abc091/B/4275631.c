#include <stdio.h>
 int main(){
 int n,m,best=0,gain;
 scanf("%d",&n);
 char s[n][10];
 for (int i=0;i<n;i++){
 scanf(" %s",s[i]);
 }
 scanf("%d",&m);
 char t[m][10];
 for (int i=0;i<m;i++){
 scanf(" %s",t[i]);
 }
 for (int i=0;i<n;i++){
 gain=0;
 for (int j=0;j<n;j++){
 if (0==strcmp(s[i],s[j])){
 gain++;
 }
 }
 for (int j=0;j<m;j++){
 if (0==strcmp(s[i],t[j])){
 gain--;
 }
 }
 if (best<gain){
 best=gain;
 }
 }
 printf("%d\n",best);
 return 0;
 } 