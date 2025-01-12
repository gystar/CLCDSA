#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0);
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define ll long long
#define INF 100000000
#define FOR(i,a,n) for(i=(a);i<(n);i++)
int comp(const void* a,const void* b){
	return strcmp((char*)a,(char*)b);
}
void fill(int a[],int b,int c){
	int i;
	FOR(i,0,b) a[i]=c;
	return;
}
void reverse(char str[],int begin,int end){
       while(begin<end){
       	swap(char,str[begin],str[end]);
       	begin++; end--;
       }
       return;
}
char str[100][21];
int main(void)
{
	int n,i;
	scanf("%d",&n);
	FOR(i,0,n){
		scanf("%s",str[i]);
		reverse(str[i],0,strlen(str[i])-1);
		//puts(str[i]);
	}
	qsort(str,n,sizeof(str[0]),comp);
	FOR(i,0,n){
		reverse(str[i],0,strlen(str[i])-1);
		puts(str[i]);
	}
	return 0;
} 