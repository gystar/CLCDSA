#include<stdio.h>
int R=1,C=1,H[2000010],N[2000010];
//????????MIN?
int hyouka(int a,int b){
  if(C<b)return 1;
  if(C<a||b==0)return 0;
  return N[H[a]]<N[H[b]]?1:0;
}
//????
void hin(int a){
  int i=C++;
  for(N[H[0]=R]=a;hyouka(0,i/2);i/=2)H[i]=H[i/2];
  H[i]=R++;
}
//??????
int hout(){
  int rt=H[1],i,j=2,k=H[--C];
  for(i=1;hyouka(i,C);i=j)H[i]=H[j=i*2+1-hyouka(i*2,i*2+1)];
  H[j/2]=k;
  return rt;
}
int main(){
  int n,i,a[200010],d[200010];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    hin(a[i]);
  }
  for(i=0;i<n;i++)d[i]=N[hout()];
  for(i=0;i<n;i++)printf("%d\n",a[i]<=d[n/2-1]?d[n/2]:d[n/2-1]);
  return 0;
} 