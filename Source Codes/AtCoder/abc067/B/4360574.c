#include <stdio.h>
int main (){
int k,l,i,j,sum=0,c;
scanf ("%d %d",&k,&l);
int a[51];
for (i=0;i<k;i++){
scanf ("%d",&a[i]);
}
  for (i=0;i<k;i++){
for (j=k-1;j>i;j--){
 if (a[j-1]<a[j]){
  c=a[j-1];
  a[j-1]=a[j];
  a[j]=c;
  }
}
}
  for (i=0;i<l;i++){
  sum=sum+a[i];
  }
  printf ("%d",sum);
  return 0;
} 