#include<string.h>
#include <stdio.h>

int main()
{   char t[1001];
    scanf("%s",t);
    int s=0,n=0,w=0,e=0;
    for(int i=0;i<strlen(t);i++){
        if(t[i]=='N')n++;
        if(t[i]=='S')s++;
        if(t[i]=='W')w++;
        if(t[i]=='E')e++;
    }
    if((n>0&&s>0)||(n==0&&s==0)){
    }else{
        printf("No");
        return 0;
    }
    if((w>0&&e>0)||(w==0&&e==0)){
    }else{
        printf("No");
        return 0;
    }
    printf("Yes");

    return 0;
} 