#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

#define INF 1e9
#define LLINF 1e18
#define PI 3.1415926535897932384
#define MOD 1000000007

typedef long long ll;
typedef long double ld;

int max(int a, int b) { return a >= b ? a : b; }
int min(int a, int b) { return a <= b ? a : b; }
int dsum(int x) { int r=0; while(x){ r+=(x%10); x/=10; } return r;}
int gcd(int a, int b) { int i; for(i=a; i>0; i--) { if(a%i == 0 && b%i == 0) { break; } } return i; }
int lcm(int a, int b) { return (a*b)/gcd(a,b); }
int asc(const void *a, const void *b) { if(*(int *)a > *(int *)b) { return 1;} if(*(int *)a == *(int *)b) { return 0;} return -1;}
int des(const void *a, const void *b) { if(*(int *)a < *(int *)b) { return 1;} if(*(int *)a == *(int *)b) { return 0;} return -1;}
int llasc(const void *a, const void *b) { if(*(long long *)a > *(long long *)b) {return 1;} if(*(long long *)a == *(long long *)b) {return 0;} return -1;}
int lldes(const void *a, const void *b) { if(*(long long *)a < *(long long *)b) {return 1;} if(*(long long *)a == *(long long *)b) {return 0;} return -1;}
int flasc(const void *a, const void *b) { if(*(float *)a > *(float *)b) {return 1;} if(*(float *)a == *(float *)b) {return 0;} return -1;}
int fldes(const void *a, const void *b) { if(*(float *)a < *(float *)b) {return 1;} if(*(float *)a == *(float *)b) {return 0;} return -1;}
int dbasc(const void *a, const void *b) { if(*(double *)a > *(double *)b) {return 1;} if(*(double *)a == *(double *)b) {return 0;} return -1;}
int dbdes(const void *a, const void *b) { if(*(double *)a < *(double *)b) {return 1;} if(*(double *)a == *(double *)b) {return 0;} return -1;}
int chasc(const void *a, const void *b) { if(*(char *)a > *(char *)b) {return 1;} if(*(char *)a == *(char *)b) {return 0;} return -1;}
int chdes(const void *a, const void *b) { if(*(char *)a < *(char *)b) {return 1;} if(*(char *)a == *(char *)b) {return 0;} return -1;}
void swap(int *a, int *b) { int tmp; tmp = *a; *a = *b; *b = tmp; return; }

int main(void) {
	char s[110], t[110];
	scanf("%s%s", s, t);
	qsort(s, strlen(s), sizeof(char), chasc);
	qsort(t, strlen(t), sizeof(char), chdes);
	if(strcmp(t,s) > 0) puts("Yes");
	else puts("No");
	
	return 0;
} 