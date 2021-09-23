#include<stdio.h>
        #include<string.h>
        #include<stdlib.h>
        #include<math.h>
         
        int main(void) {
         
        	int N;
          	long long K; 
        	int a, b;
        	int i;
        	long long count[100000] = { 0 };
        	long long sum=0;
         
        	scanf("%d %lld", &N, &K);
        	for (i = 0; i < N; i++) {
        		scanf("%d %d", &a, &b);
        		count[a-1] += b;
        	}
         
        	for (i = 0; i < 100000; i++) {
        		sum += count[i];
        		if (sum >= K) {
        			printf("%d\n", i+1);
        			break;
        		}
        	}
        } 