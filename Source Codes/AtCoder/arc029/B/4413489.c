#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

/*
a*sinP+b*cosP=c
*/
int calc(int a,int b,int c,int d){
  if(a<=c && b<=d) return 1;
  double l=0;
  double r=M_PI/2;
  for(int iter=0;iter<60;iter++){
    double m=(l+r)/2;
    if(a*sin(m)+b*cos(m)<=c){
      l=m;
    } else {
      r=m;
    }
  }
  return a*sin(l)+b*cos(l)<=c && a*cos(l)+b*sin(l)<=d;
}

void run(void){
  int a,b;
  scanf("%d%d",&a,&b);
  int n;
  scanf("%d",&n);
  while(n--){
    int c,d;
    scanf("%d%d",&c,&d);
    puts(calc(MAX(a,b),MIN(a,b),MAX(c,d),MIN(c,d))?"YES":"NO");
  }
}

int main(void){
  run();
  return 0;
} 