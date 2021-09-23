#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    int l[n];
    int sum=0,max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
        sum+=l[i];
        max=(max<l[i])?l[i]:max;
    }   
    if(sum-max>max)printf("Yes\n");
    else printf("No\n");
    return 0;
} 