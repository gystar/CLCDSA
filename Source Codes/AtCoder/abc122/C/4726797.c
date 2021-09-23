#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,q,i,j;
  scanf("%d %d",&n,&q);
  char s[n];
  int kosu[n];
  int answer[q];
  int l[q],r[q];

  scanf("%s",s);

  for(i=0;i<q;i++) scanf("%d %d",&l[i],&r[i]);

  for(i=0,j=0;i<n;i++)
    {
        kosu[i]=j;
        if(s[i]=='A'&&s[i+1]=='C')
            j++;
    }
    kosu[i]=j;

 

  for(i=0;i<q;i++){
    answer[i]=kosu[r[i]-1]-kosu[l[i]-1];
  }

  for(i=0;i<q;i++){
  printf("%d\n",answer[i]);
  }

  return 0;

} 