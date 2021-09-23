#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    int n,k;

    scanf("%d%d",&n,&k);
    int s[n];
    
    for (int i=0; i<n; i++){
        scanf("%d",&s[i]);
        if(s[i]==0){
            printf("%d\n",n);
            exit (0) ;
        } 
    }
    
    int i=0,j=0,tmp=0,ans=0;
    long long sum=1;
    while(i<n && j<n){
        if (sum*s[j]<=k){
            sum*=s[j];
            j++;
            tmp++;
            if (tmp>ans){
                ans=tmp;
            }
        } else {
            if (sum!=1){
                sum/=s[i];
            }
            i++;
            tmp--;
        }
    }
    printf("%d\n",ans);
	return 0 ;
} 