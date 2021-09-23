#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/*????????
int sort(const void *a, const void *b){
    return *(int*)a-*(int*)b ;
}
    qsort (data,sizeof(data),sizeof(int),sort); 
*/

bool visited[50],graph[50][50];
int n,m;

void dfs (int v){
    visited[v]=true;
    for (int v2=0; v2<n; v2++){
        if (graph[v][v2]==false){
            continue;
        }
        if (visited[v2]==true){
            continue;
        }
        dfs (v2);
    }
}

int main(void){
    scanf("%d%d",&n,&m);
    int a[50],b[50];
    
    for (int i=0; i<m; i++){
        scanf("%d%d",&a[i],&b[i]);
        a[i]--;
        b[i]--;
    }
    
    for (int i=0; i<m; i++){
        graph[a[i]][b[i]]=true;
        graph[b[i]][a[i]]=true;
        visited[i]=true;
    }
    
    int ans=0;
    
    for (int i=0; i<m; i++){
        graph[a[i]][b[i]] =false;
        graph[b[i]][a[i]] =false;
        
        for (int j=0; j<n; j++){
            visited[j]=false;
        }
        
        dfs(0);
        
        bool bridge =false;
        for (int j=0; j<n; j++){
            if (visited[j]==false){
                bridge=true;
            }
        }
        if (bridge ==true){
            ans++;
        }
        
        graph[a[i]][b[i]]=true;
        graph[b[i]][a[i]]=true;
    }
    printf("%d\n",ans);
	return 0 ;
} 