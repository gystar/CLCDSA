#include<stdio.h>
#include<math.h>

int main(void){
  const long double pi=3.1415926535897932384626433832795028841971;
  int N,Q;
  int i,j,k;
  struct{
    long double R,X,H;
  }cone[100];
  long double A,B,calcA,calcB;
  long double V,tmpA,tmpB;

  scanf("%d%d",&N,&Q);
  for(i=0;i<N;i++) scanf("%Lf%Lf%Lf",&cone[i].X,&cone[i].R,&cone[i].H);
  
  for(i=0;i<Q;i++){
    V=0;
    scanf("%Lf%Lf",&A,&B);
    for(j=0;j<N;j++){
      if(cone[j].X+cone[j].H<=A || cone[j].X>=B) continue;
      calcA=(A<=cone[j].X)?cone[j].X:A;
      calcB=(B>=cone[j].X+cone[j].H)?cone[j].H+cone[j].X:B;

      tmpA=cone[j].H-calcA+cone[j].X;
      tmpB=cone[j].H-calcB+cone[j].X;

      tmpA*=tmpA*tmpA;
      tmpB*=tmpB*tmpB;
      V+=(tmpA-tmpB)*cone[j].R*cone[j].R/(3*cone[j].H*cone[j].H);
    }
    printf("%.6Lf\n",pi*V);
  }
  return 0;
} 