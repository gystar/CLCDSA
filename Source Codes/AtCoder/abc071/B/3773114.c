#include <stdio.h>
#include <string.h>
int main()
{   int chk[27]={0};
    char s[100001];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        chk[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(chk[i]==0){
            printf("%c",'a'+i);
            return 0;
        }
    }
    printf("None");
    return 0;
} 