#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[]) {
  int N,Q,i;
  scanf("%d%d", &N,&Q);
  char S1[N];
  int l[Q],r[Q];
  scanf("%s", S1);
  char S[N+1];
  for ( i = 1; i <= N; i++) {
    S[i]=S1[i-1];
  }
  for (i = 0; i <Q; i++) {scanf("%d%d",&l[i],&r[i]);}
  int Sum[N+1];
  Sum[0]=0;
  Sum[1]=0;
  for (i = 2; i <= N; i++) {
    if (S[i]=='C'&&S[i-1]=='A') {
      Sum[i]=Sum[i-1]+1;
    }else{
      Sum[i]=Sum[i-1];
    }
  }
  int ans;
  for (i = 0; i < Q; i++) {
    ans=Sum[r[i]]-Sum[l[i]];
    printf("%d\n", ans);
  }
  return 0;
} 