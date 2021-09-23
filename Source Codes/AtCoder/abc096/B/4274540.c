#include<stdio.h>
#include<math.h>

int main(){
  int i,j,k;
  int A[3];
  scanf("%d %d %d",&A[0],&A[1],&A[2]);
  scanf("%d",&k);
  int tmp;
  for (i=0; i<3; ++i) {
    for (j=i+1; j<3; ++j) {
      if (A[i] > A[j]) {
        tmp =  A[i];
        A[i] = A[j];
        A[j] = tmp;
      }
    }
  }

  for(i=0;i<k;i++)
    A[2]*=2;
  
  printf("%d\n",A[0]+A[1]+A[2]);
  return 0;
} 