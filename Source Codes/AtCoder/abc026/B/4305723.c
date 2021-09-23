#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const int *a,const int *b){
  return *b-*a;
}
int main(){
  int n,r[1000],i,s=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&r[i]);
  }
  qsort(r,n,sizeof(int),cmp);
  for(i=0;i<n;i++){
    s+=i%2?-r[i]*r[i]:r[i]*r[i];
  }
  printf("%f\n",s*M_PI);
} 