#include <stdio.h>

int main(void) {
  int  i,j,n,d,k,l[10000],r[10000],s[100],t[100],ans[100];
  scanf("%d %d %d",&n,&d,&k);
  for (i = 0; i < d; i++) {
    scanf("%d %d",&l[i],&r[i]);
  }
  for (i = 0; i < k; i++) {
    scanf("%d %d",&s[i],&t[i]);
  }
  for (i = 0; i < d; i++) {
    for (j = 0; j < k; j++) {
      if (s[j] >=l[i] && s[j] <= r[i]) {
        if (t[j] >= l[i] && t[j] <= r[i]) {
          ans[j] = i + 1;
          s[j] = 2000000000;
        } else {
          if (s[j] < t[j]) {
            s[j] = r[i];
          } else {
            s[j] = l[i];
          }
        }
      }
    }
  }
  for (i = 0; i < k; i++) {
    printf("%d\n",ans[i]);
  }
  return 0;
} 