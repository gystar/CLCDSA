#include <stdio.h>
int main(){
int k,i,max=0,a=0;
scanf ("%d",&k);
char s[100];
scanf ("%s",s);
for (i=0;i<k;i++){
if (s[i]=='I'){
a++;
}
else if (s[i]=='D'){
a--;
}
if (max<a){
max=a;
}
}
  printf ("%d",max);
return 0;
} 