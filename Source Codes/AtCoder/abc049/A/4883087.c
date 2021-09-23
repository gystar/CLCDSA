#include <stdio.h>
int main(void){
    char c;
    char vowel[5] = {'a','e','i','o','u'};
    scanf("%c",&c);
    for(int i = 0; i < 5; i++){
        if(c == vowel[i]){
            printf("vowel\n");
            return 0;
        }
    }
    printf("consonant\n");

    return 0;
} 