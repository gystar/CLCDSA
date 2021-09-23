#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c;
    scanf("%c",&c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
        printf("vowel\n");
    }else{
        printf("consonant\n");
    }
} 