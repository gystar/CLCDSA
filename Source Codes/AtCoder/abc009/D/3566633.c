#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned int uint;

#define POS(i,j) ((i)*n+(j))

uint *tmp=NULL;
void matmul(uint *c,uint *a,uint *b,uint n){
  memset(tmp,0,sizeof(uint)*n*n);
  uint i,j,k;
  for(i=0;i<n;i++){
    for(k=0;k<n;k++){
      for(j=0;j<n;j++){
	tmp[POS(i,j)]+=a[POS(i,k)]*b[POS(k,j)];
      }
    }
  }
  for(i=0;i<n;i++) for(j=0;j<n;j++) c[POS(i,j)]=tmp[POS(i,j)]&1;
}

void run(void){
  uint n,m;
  scanf("%u%u",&n,&m);
  uint a[100];
  uint c[100];
  uint i,j;
  for(i=0;i<n;i++) scanf("%u",a+i);
  for(i=0;i<n;i++) scanf("%u",c+i);
  if(m<=n){
    printf("%u\n",a[m-1]);
    return;
  }
  uint *t=(uint *)calloc(n*n,sizeof(uint));
  uint *s=(uint *)calloc(n*n,sizeof(uint));
  tmp=(uint *)calloc(n*n,sizeof(uint));
  uint ans=0;
  for(i=0;i<32;i++){
    memset(t,0,sizeof(uint)*n*n);
    memset(s,0,sizeof(uint)*n*n);
    for(j=0;j<n;j++) t[POS(j,j)]=1;
    for(j=1;j<n;j++) s[POS(j-1,j)]=1;
    for(j=0;j<n;j++) s[POS(n-1,j)]=(c[n-1-j]>>i)&1;
    uint k=m-1;
    while(k>0){
      if(k&1) matmul(t,t,s,n);
      matmul(s,s,s,n);
      k>>=1;
    }
    uint sum=0;
    for(j=0;j<n;j++) sum+=t[POS(0,j)]*((a[j]>>i)&1);
    if(sum&1) ans|=1<<i;
  }
  printf("%u\n",ans);
}

int main(void){
  run();
  return 0;
} 