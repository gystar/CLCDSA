#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STRING 100

	char sInput[MAX_STRING+1]="";


int main() {
	char* psInput;

	int i=0;
	int j=0;
	long long nMin=0;
	long long  nMax=0;
	long long  nNow=0;
	long long  nCount=0;

	// read line 1
	gets(sInput);
	psInput = strtok(sInput," ");
	nMin = atoll(psInput);
	psInput = strtok(NULL," ");
	nMax = atoll(psInput);

	nNow=nMin;

	while(nNow<=nMax){
		nCount++;
		nNow=nNow*2;
	}

	printf("%lld\n",nCount);
	

    return 0;
} 