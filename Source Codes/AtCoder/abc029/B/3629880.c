#include <stdio.h>
#include<string.h>
int main()
{   char s[11][12];
    int i=0,cnt=0;
    while(i<12)scanf("%s",s[i++]);
    for(i=0;i<12;i++){
        for(int j=0;j<strlen(s[i]);j++){
            if(s[i][j]=='r'){
                cnt++;
                break;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
} 