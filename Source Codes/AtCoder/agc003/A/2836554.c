#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char t[1200];
    int n=0,e=0,w=0,s=0;
    scanf("%s",t);
    for (int i=0; i<strlen(t); i++){
        if (t[i]=='N'){
            n=1;
        } else if (t[i]=='E'){
            e=1;
        } else if (t[i]=='W'){
            w=1;
        } else if (t[i]=='S'){
            s=1;
        }
    }
    if (n==s && e==w){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
	return 0 ;
} 