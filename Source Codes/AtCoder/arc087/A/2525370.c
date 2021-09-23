#include<stdio.h>

int main(){
  int box[100001]={},i,n,cnt=0;
  long a[100000];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
    if(a[i]>100000)
      cnt++;
    else if(box[a[i]]<a[i])
      box[a[i]]++;
    else
      cnt++;
  }
  for(i=1;i<=100000;i++){
    if(box[i]!=i)
      cnt+=box[i];
  }
  printf("%d\n",cnt);
} 