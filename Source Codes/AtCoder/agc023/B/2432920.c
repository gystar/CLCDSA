#include<stdio.h>
int main(){
  int n,i,j,k;
  long flag=1;
  char s[301][301];
  long cnt=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",s[i]);
  }
  for(i=0;i<n;i++){
    flag=1;
    for(j=0;j<n-1;j++){
      for(k=j+1;k<n;k++){
        if(s[(i+j)%n][k]!=s[(i+k)%n][j]) flag=0;
      }
    }
    cnt+=(long)flag*n;
  }
  printf("%ld\n",cnt);
} 