#include<stdio.h>
long int mini(long int a,long int b){
  if(a>b) return b;
  return a;
}

int main(void){
  long int ans=1000000000,cnt=0,n,i;
  scanf("%ld",&n);
  long int a[n];
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }
  for(i=0;i<n;i++){
    cnt=0;
    while(a[i]){
      if(a[i]%2==1) break;
      a[i]/=2;
      cnt++;
    }
    ans=mini(ans,cnt);
  }
  printf("%ld\n",ans);
  return 0;
} 