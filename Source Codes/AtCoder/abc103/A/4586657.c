#include <stdio.h>
#include <stdlib.h>
int maxi(int a,int b,int c);
int mini(int a,int b,int c);

int main(void){
int a,b,c;
  int max,min;
  scanf("%d %d %d",&a,&b,&c);
  max=maxi(a,b,c);
  min=mini(a,b,c);
  printf("%d\n",abs(max-min));
  
return 0;
}

int maxi(int a,int b,int c){
int max;
  max=a;
  if(b>=max){max=b;}
  if(c>=max){max=c;}
  
return max;
}

int mini(int a,int b,int c){
int min;
  min=a;
  if(b<=min){min=b;}
  if(c<=min){min=c;}
  
return min;
} 