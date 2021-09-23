#include <stdio.h>
#include <string.h>
 
long long int miin(long long int a,long long int b,long long int n){
  long long int i,x,s=-1;
  if(a%n==0){
    return a;
  }else{
    x=a + n - a%n;
    if(x <= b){
      return x;
    }else{
      return s;
    }
  }
}
 
long long int maax(long long int a,long long int b,long long int n){
  long long int i,x,s=-1;
  if(b%n==0){
    return b;
  }else{
    x=b - b%n;
    if(x >= a){
      return x;
    }else{
      return s;
    }
  }
}
 
long long int main(){
  long long int k,i,j;
  scanf("%ld",&k);
  long long int a[k];
  for(i=0;i<k;i++){
    scanf("%ld",&a[i]);
  }
  long long int min,max;
  if(a[k-1]!=2){
    printf("-1\n");
  }else{
    min = 2;
    max = 3;
    for(j=k;j>=2;j--){
      min = miin(min,max,a[j-2]);
      max = maax(min,max,a[j-2]) + a[j-2] - 1;
      if(min == -1){
        j = -1;
      }
    }
    if(min==-1 || max == -1){
      printf("%ld\n",min);
    }else{
      printf("%ld %ld\n",min,max);
    }
  }
  return 0;
} 