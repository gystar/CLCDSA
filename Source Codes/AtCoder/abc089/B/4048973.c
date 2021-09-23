#include <stdio.h>
int main(){
  int N, color[4], i, sum=0;
  scanf("%d%*c", &N);
  for (i=0; i<N; i++) {
    char S;
    scanf("%c%*c", &S);
    if (S=='P') color[0]=1;
    if (S=='W') color[1]=1;
    if (S=='G') color[2]=1;
    if (S=='Y') color[3]=1;
  }
  for (i=0; i<4; i++) sum+=color[i];
  if (sum==4) printf("Four\n");
  else printf("Three\n");
  return 0;
} 