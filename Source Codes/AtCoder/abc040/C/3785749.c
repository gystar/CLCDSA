#include<stdio.h>
int dif(int a, int b);
int min(int a, int b);
int N, d[100000], i;
short H[100000];
int main(){
  scanf("%d", &N);
  for(i=0; i<N; i++){scanf("%d", H+i);}
  d[0]=0;
  d[1]=dif(H[0], H[1]);
  for(i=2; i<N; i++){
    d[i]=min(d[i-2]+dif(H[i-2], H[i]), d[i-1]+dif(H[i-1], H[i]));
  }
  printf("%d\n", d[N-1]);
}

int dif(int a, int b){
  return a<b?b-a:a-b;
}
int min(int a, int b){
  return a>b?b:a;
} 