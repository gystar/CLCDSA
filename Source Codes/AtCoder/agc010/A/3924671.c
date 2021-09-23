#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    int a[n],nodd=0,neven=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)neven++;
        else nodd++;
    }
        neven+=nodd/2;
        nodd=nodd%2;
        
    while(neven>1){
        neven=(neven+1)/2;
    }
    if(nodd+neven==1)printf("YES");
    else printf("NO");
    
    

    return 0;
} 