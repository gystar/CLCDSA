#include<stdio.h>
int main(){
  int b, c,N, x=0, y=0;
  char s[256][256]={};
  scanf("%d", &N);
  for(c=0;c<N;c++){
     scanf("%s", &s[c]);
  }
  for(c=0;c<N;c++){
    for(b=0;b<N;b++){
    if(s[c][b]=='R')x++;
    else if(s[c][b]=='B')y++;
  }
  }
  if(x>y)printf("TAKAHASHI\n");
  else if(y>x)printf("AOKI\n");
  else if(x==y)printf("DRAW\n");
  return 0;
} 