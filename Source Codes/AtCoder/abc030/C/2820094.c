#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n,m,x,y;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    int a[n],b[m];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=0; i<m; i++){
        scanf("%d",&b[i]);
    }
    int ans=0,i=0,j=0;
    bool where=false;
    while (i<n && j<m){
        if (where==false){
            if (b[j]<a[i]+x){
                j++;
            } else {
                ans++;
                where=true;
            }
        } else {
            if (a[i]<b[j]+y){
                i++;
            } else {
                where=false;
            }
        }
    }
    printf ("%d\n",ans);
	return 0 ;
} 