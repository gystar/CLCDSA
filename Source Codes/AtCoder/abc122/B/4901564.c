#include <stdio.h>
 
int main(void) {
  char S[11];
  int i;
  int ans=0;
  int cnt=0;
 
  scanf("%s", S);
 
  for(i=0; i<11; i++) {
      if(S[i]=='A' || S[i]=='C' || S[i]=='G' || S[i]=='T')
	cnt++;
      else {
        if(ans<cnt)
	    ans=cnt;
	  cnt=0;
	}
    }
 
  printf("%d", ans) ;
  return 0 ;
} 