#include<stdio.h>

int main(void)
{
 char c;
 scanf("%c",&c);
 if     (c=='A') printf("T\n");
 else if(c=='T') printf("A\n");
 else if(c=='C') printf("G\n");
 else if(c=='G') printf("C\n");
 return 0;
} 