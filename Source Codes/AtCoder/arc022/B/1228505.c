#include<stdio.h>
#define max(x,y)(x<y?y:x)
int main(){
  static int N,i,j,k,ans,A[100005],B[100005];
  scanf("%d",&N);
  for(i;i<N;++i){
    scanf("%d",&A[i]);
    if(B[A[i]]){
      ans=max(ans,i-j);
      while(B[A[i]])
        B[A[j++]]=0;
    }
    B[A[i]]=1;
  }
  ans=max(ans,i-j);
  printf("%d\n",ans);
} 