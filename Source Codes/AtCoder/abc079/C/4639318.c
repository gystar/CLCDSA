#include<stdio.h>
#include<string.h>
#define rep(i,l,r) for(int (i)=(l);(i)<(r);(i)++)
#define bit(n,m)((n>>m)&1)
int main(){
  char a[5];
  scanf("%s",a);
  rep(i,0,8){
    int ans=a[0]-48;
    rep(j,0,3)ans+=bit(i,j)?a[j+1]-48:48-a[j+1];
    if(ans==7){
      rep(j,0,3)printf("%c%c",a[j],bit(i,j)?'+':'-');
      printf("%c=7",a[3]);
      return 0;
    }
  }
} 