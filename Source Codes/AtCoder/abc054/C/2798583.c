#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int n,m,a[30],b[30],count=0,ans=0;
bool visited[8];

int dfs(v){
    visited[v]=true;
    count++;
    if (count==n){
        ans++;
    }
    for (int i=0; i<m; i++){
        if (a[i]==v){
            int v2=b[i];
            if (visited [v2]==true){
            continue;
            }
            dfs(v2);
            visited[v2]=false;
            count--;
        } else if (b[i]==v){
            int v2=a[i];
            if (visited [v2]==true){
            continue;
            }
            dfs(v2);
            visited[v2]=false;
            count--;
        }
    }
    return 0;
}


int main(void){
    scanf("%d%d",&n,&m);
    for (int i=0; i<n; i++){
        visited[i]=false;
    }
    for (int i=0; i<m; i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    
    dfs(1);
    printf ("%d\n",ans);
	return 0 ;
} 