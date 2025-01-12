#include <stdio.h>

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int N,A,B;
  int ans = 0;
  scanf("%d%d%d",&N,&A,&B);

  char s[4];
  int X;
  for(int i = 0;i < N;i++){
    scanf("%s%d",s,&X);
    ans += min(B,(max(A,X)))*(s[0]=='W'?-1:1);
  }
  
  if(ans == 0) printf("0\n");
  else if(ans < 0) printf("West %d\n",-ans);
  else printf("East %d\n",ans);

  return 0;
} 