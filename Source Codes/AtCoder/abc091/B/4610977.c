#include <stdio.h>
#include <string.h>
int main(){
  int j,i,n,m,best=0;
  char sn[101][11],tm[101][11];
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%s",sn[i]);
  scanf("%d",&m);
  for(i=0;i<m;i++)scanf("%s",tm[i]);
  for(i=0;i<n;i++){
    int scr=0;
    for(j=0;j<n;j++){
      if(strcmp(sn[i],sn[j])==0)scr++;
    }
    for(j=0;j<m;j++){
      if(strcmp(sn[i],tm[j])==0)scr--;
    }
    if(best<scr) best=scr;
  }
  printf("%d",best);
  return 0;
} 