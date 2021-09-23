#include <stdio.h>

int main(){

  long S,s,c,p=1;
  int k,l,i;
  int m,n=0;
  long a=1;
  long ans=0;
  scanf("%ld", &S);
  s=S;
  while(s>0){
    n++;
    s/=10;
  }

  for(m=1;m<=n;m++){
    s=S;
    l=n-m+1;
    k=1;
    while(s>=a){
      c=s%(a*10);
      p=1;
      if(k==1||k==l)
        for(i=1;i<=n-m-1;i++)p*=2;
      else
        for(i=1;i<=n-m-2;i++)p*=2;
      for(i=1;i<=p;i++)
        ans+=c;
      k++;
      s/=10;
    }
    a*=10;
  }

  printf("%ld\n",ans);
  return 0;
} 