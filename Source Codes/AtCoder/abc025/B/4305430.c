#include<stdio.h>
#include<string.h>

int main(){
  int n,a,b,d,i,p=0;
  char s[5],E[]="East",W[]="West";
  scanf("%d%d%d",&n,&a,&b);
  for(i=0;i<n;i++){
    scanf("%s%d",s,&d);
    if(d<a) d=a;
    else if(b<d) d=b;
    if(strcmp(s,E)) d=-d;
    p+=d;
  }
  if(p) {
    printf("%s %d\n",p>0?E:W,abs(p));
  }
  else puts("0");
} 