#include <stdio.h>
int N;
int l[8];
int dfs(int cur){
    if(cur==N){
        for(int i=0;i<N;i++){
            printf("%c",'a'+l[i]);
        }
        printf("\n");
        return 1;
    }
    l[cur]=0;
    dfs(cur+1);
    l[cur]=1;
    dfs(cur+1);
    l[cur]=2;
    dfs(cur+1);
    
}
int main()
{   scanf("%d",&N);
    dfs(0);
    return 0;
} 