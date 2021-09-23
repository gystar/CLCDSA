#include<stdio.h>
int main(){
int R;
scanf("%d",&R);
if(R<1200)printf("ABC");
else if(R<2800&&R>=1200)printf("ARC\n");
else printf("AGC\n");
return 0;
} 