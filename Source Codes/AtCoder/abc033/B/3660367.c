#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int n,idx,num,max=0,total=0;
  char s[100001];
  char ans_s[100001];
  scanf("%d",&n);
  for(int i=0; i<n; i++) {
    scanf("%s%d",s,&num);
    if(num>max) {
      idx=i;
      max=num;
      strcpy(ans_s,s);
    }
    total+=num;
  }
  if(max*2>total) printf("%s\n",ans_s);
  else printf("atcoder\n");
  return 0;
} 