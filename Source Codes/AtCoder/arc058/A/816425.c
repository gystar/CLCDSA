#include<stdio.h>
#include<stdbool.h>

bool check(int checks,int *D,int K);

int main(void){
  int N,K,D[10];
  int i,j,now;
  bool flg=true;

  scanf("%d%d",&N,&K);
  for(i=0;i<K;i++) scanf("%d",D+i);

  for(i=N;flg;i++){
    flg=false;
    for(now=1;now<=i;now*=10){
      if(check((i%(10*now))/now,D,K)){
	flg=true;
	break;
      }
    }
  }
  printf("%d\n",i-1);    
  return 0;
}

bool check(int checks,int *D,int K){
  int i;
  for(i=0;i<K;i++) if(checks==D[i]) return true;
  return false;
} 