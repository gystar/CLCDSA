#include <stdio.h>
int main(void) {
   int N;
   int Q;
   scanf("%d%d", &N, &Q);
   char S[100001];
   int accumulate[100001] = {0};
   scanf("%s", S);
   int cnt = 0;
   for (int i = 0; i < N; i++) {
      if (S[i] == 'A' && S[i+1] == 'C') {
         cnt++;
      }
      accumulate[i+1] = cnt;
   }

   for (int i = 0; i < Q; i++) {
      int l1;
      int l2;
      scanf("%d%d", &l1, &l2);
      printf("%d\n",accumulate[l2 - 1] - accumulate[l1 - 1]);
   }
} 