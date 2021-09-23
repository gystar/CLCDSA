#include <string.h>
#include <stdio.h>

int main()
{   char w[101];
    scanf("%s",w);
    int a[26]={0},l=strlen(w);
    for(int i=0;i<l;i++){
        a[w[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]%2==1){
            printf("No");
            return 0;
        }
    }
    printf("Yes");

    return 0;
} 