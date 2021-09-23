#include <stdio.h>
int main(void) {
 long long int Q,H,S,D,N,twoL,Sum=0,YJ,oneL;
 scanf("%ld%ld%ld%ld",&Q,&H,&S,&D);
 scanf("%ld",&N);
 oneL=S;
if(oneL>2*H){oneL=2*H;};
if(oneL>4*Q){oneL=4*Q;};
if(2*oneL>D){twoL=D;}
else{twoL=2*oneL;}
Sum=(N-(N%2))/2*twoL+N%2*oneL;
 printf("%ld\n",Sum);
 return 0;
 } 