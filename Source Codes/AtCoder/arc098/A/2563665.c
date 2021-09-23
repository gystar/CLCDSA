#include<stdio.h>

int main(){
  int n,i,min=300000,j,cnt=0;
  char s[300010];
  scanf("%d",&n);
  scanf("%s",s);
  for(i=1;i<n;i++){
    if(s[i]=='E') cnt++;
  }
  min=cnt;
  for(i=1;i<n;i++){
    if(s[i]=='E') cnt--;
    if(s[i-1]=='W') cnt++;
    if(min>cnt) min=cnt;
  }
  printf("%d\n",min);
} 