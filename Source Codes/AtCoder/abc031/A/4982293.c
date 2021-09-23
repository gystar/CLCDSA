#include<stdio.h>
int main()
{
  int A,B;
  scanf("%d%d",&A,&B);
  if((A+1)*B>A*(B+1))
  {
    printf("%d\n",(A+1)*B);
  }
  if(A*(B+1)>(A+1)*B)
  {
    printf("%d\n",A*(B+1));
  }
  if((A+1)*B==A*(B+1))
  {
    printf("%d\n",(A+1)*B);
  }
  return 0;
} 