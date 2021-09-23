#include <stdio.h>
#include <string.h>

int main() {
	char a[20],*tmp;
	int i;

	scanf("%s",a);

	while ((tmp = strchr(a, 'O'))!=NULL) *tmp = '0';
	while ((tmp = strchr(a, 'D'))!=NULL) *tmp = '0';
	while ((tmp = strchr(a, 'I'))!=NULL) *tmp = '1';
	while ((tmp = strchr(a, 'Z'))!=NULL) *tmp = '2';
	while ((tmp = strchr(a, 'S'))!=NULL) *tmp = '5';
	while ((tmp = strchr(a, 'B'))!=NULL) *tmp = '8';

	printf("%s\n",a);
	return 0;
} 