#include <stdio.h>
#include <stdlib.h>
             
int main(void){
int N;
int K;
int min;
scanf("%d",&N);
scanf("%d",&K);
int i = K;
int c = 1;
while(i < N){
i = i+ (K-1);
c = c + 1;
}
printf("%d",c);
return 0;
} 