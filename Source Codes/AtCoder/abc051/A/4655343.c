#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long 

int main(int argc, char const *argv[]){
	char str[24];
	scanf("%s",str);
	str[6 - 1] = ' ';
  	str[14 - 1] = ' ';
  	printf("%s",&str);
} 