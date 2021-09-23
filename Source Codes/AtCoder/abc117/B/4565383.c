#include<stdio.h>
#include<stdlib.h>

int cmp(const void *,const void *);

int
main()
{
  	int N;
  	scanf("%d",&N);
  	int L[N];
  	int i;
  	for (i=0;i<N;i++){
      	scanf("%d",&L[i]);
    }
  
  	qsort(L,sizeof(L)/sizeof(int),sizeof(int),cmp);
  	
  	int goukei=0;
  	for (i=1;i<N;i++){
      	goukei += L[i];
    }
  	
  	if(L[0]<goukei){
      	printf("Yes");
    }else{
      	printf("No");
    }
  
  	return 0;
 
}

int
cmp(const void *a,const void *b){
	return *(int *)b- *(int *)a;
} 